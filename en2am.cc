#include <map>
#include <string>
#include <vector>
#include <stdexcept>
#include <iostream>

#include "en_am.h"

using namespace std;

class translator {
private:
	string sconverted; //converted to amharic string. should be unicode;
	map<string, string>& conv_tbl; //xxx should be unicode strings

	vector<string> match_key(const string& word);
	vector<string> tokenize(string text, char sep);

public:
	translator(map<string, string>& _conv_tbl) :
			conv_tbl(_conv_tbl) {
	}
	virtual ~translator() {
	}

	string to_amharic(const string& english_str); //xxx should be a unicode return value
};

vector<string> translator::tokenize(string text, char sep) {
	vector<string> tokens;
	int start = 0, end = 0;

	while ((end = text.find(sep, start)) != string::npos) {
		tokens.push_back(text.substr(start, end - start));
		start = end + 1;
	}
	tokens.push_back(text.substr(start));

	return tokens;
}

vector<string> translator::match_key(const string& word) {
	string matched_key = "";

	for (auto iter = conv_tbl.begin(); iter != conv_tbl.end(); ++iter) {
		bool match = false;
		string key = iter->first;

		if (key.size() > word.size())
			continue;

		for (int i = 0; i < key.size(); i++) {
			if (key.at(i) != word.at(i)) {
				match = false;
				break;
			} else {
				match = true;
			}
		}

		if (match) {
			if (matched_key == "") {
				matched_key = key;
			} else {
				if (key.size() > matched_key.size())
					matched_key = key;
			}
		}
	}

	if (matched_key != "")
		return vector<string> { matched_key, conv_tbl[matched_key] }; //no match found
	else
		return vector<string> { };
}

string translator::to_amharic(const string& english_str) {
	vector<string> lines = tokenize(english_str, '\n');
	for (string line : lines) {

		vector<string> winp = tokenize(line, ' ');
		for (size_t i = 0; i < winp.size(); i++) {
			string wout; //Amharic output. A unicode string

			string word = winp[i];
			while (word.size() != 0) {
				cout << "Matching " << word << endl;
				vector<string> matched = match_key(word); // {en_key,am_equivalent}

				if (matched.size() != 2)
					throw invalid_argument(
							"No matching key found in word " + word);
				//cout << matched[0] <<" matched with " << matched[1] << endl;
				wout += matched[1]; //append translation token.
				//trim from the front
				word.erase(0, matched[0].size());
				// cout << "After erasure " << word << " " << word.size() << endl;
			}

			sconverted += wout;
			if (i != winp.size())
				sconverted += " ";
		}

		//cout << "Adding new line" << endl;
		sconverted += "\n";
	}

	return sconverted;
}

int main(int c, char** args) {
	translator ts(KEY_MAP);
	string eng = "tabadaa yasharmu`taa lj";
	cout << "Converting " << eng << endl;
	cout << ts.to_amharic(eng) << endl;
	return 0;
}
