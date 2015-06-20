/*
 * Copyright (c) 2015, Misgana Bayetta <misgana.bayetta@gmail.com>
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 1. Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 3. All advertising materials mentioning features or use of this software
 must display the following acknowledgement:
 This product includes software developed by the <organization>.
 4. Neither the name of the <organization> nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY Misgana Bayetta ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include <map>
#include <string>

#ifndef _EN_AM_H_
#define _EN_AM_H_

std::map<std::string,std::string> KEY_MAP={
                                 {"ha","ሀ"},{"hu","ሁ"},{"hi","ሂ"},{"haa","ሃ"},{"he","ሄ"},{"h","ህ"},{"ho","ሆ"},
                                 {"'ha","ሐ"},{"'hu","ሑ"},{"'hi","ሒ"},{"'haa","ሓ"},{"'he","ሔ"},{"'h","ሕ"},{"'ho","ሖ"},{"'hua","ሗ"},
                                 {"^ha","ኸ"},{"^hu","ኹ"},{"^hi","ኺ"},{"^ha","ኻ"},{"^he","ኼ"},{"^h","ኽ"},{"^ho","ኾ"},
                                 {"la","ለ"},{"lu","ሉ"},{"li","ሊ"},{"laa","ላ"},{"le","ሌ"},{"l","ል"},{"lo","ሎ"},{"lua","ሏ"},                        
                                 {"ma","መ"},{"mu","ሙ"},{"mi","ሚ"},{"maa","ማ"},{"me","ሜ"},{"m","ም"},{"mo","ሞ"},{"mua","ሟ"},
	                         {"sa","ሰ"},{"su","ሱ"},{"si","ሲ"},{"saa","ሳ"},{"se","ሴ"},{"s","ስ"},{"so","ሶ"},{"sua","ሷ"},
                                 {"'sa","ሠ"},{"'su","ሡ"},{"'si","ሢ"},{"'saa","ሣ"},{"'se","ሤ"},{"'s","ሥ"},{"'so","ሦ"},
	                         {"ra","ረ"},{"ru","ሩ"},{"ri","ሪ"},{"raa","ራ"},{"re","ሬ"},{"r","ር"},{"ro","ሮ"},{"rua","ሯ"},
	                         {"sha","ሸ"},{"shu","ሹ"},{"shi","ሺ"},{"shaa","ሻ"},{"she","ሼ"},{"sh","ሽ"},{"sho","ሾ"},{"shua","ሿ"},
	                         {"qa","ቀ"},{"qu","ቁ"},{"qi","ቂ"},{"qaa","ቃ"},{"qe","ቄ"},{"q","ቅ"},{"qo","ቆ"},{"qua","ቇ"},
	                         {"'qa","ቐ"},{"'qu","ቑ"},{"'qi","ቒ"},{"'qaa","ቓ"},{"'qe","ቔ"},{"'q","ቕ"},{"'qo","ቖ"},
                                 {"ቨ","va"},{"ቩ","vu"},{"ቪ","vi"},{"ቫ","vaa"},{"ቬ","ve"},{"ቭ","v"},{"ቮ","vo"},{"ቯ","vua"},
	                         {"ba","በ"},{"bu","ቡ"},{"bi","ቢ"},{"baa","ባ"},{"be","ቤ"},{"b","ብ"},{"bo","ቦ"},{"bua","ቧ"},
                                 {"ta","ተ"},{"tu","ቱ"},{"ti","ቲ"},{"taa","ታ"},{"te","ቴ"},{"t","ት"},{"to","ቶ"},{"tua","ቷ"},
                                 {"'ta","ጠ"},{"'tu","ጡ"},{"'ti","ጢ"},{"'taa","ጣ"},{"'te","ጤ"},{"'t","ጥ"},{"'to","ጦ"},{"'tua","ጧ"},
                                 {"cha","ቸ"},{"chu","ቹ"},{"chi","ቺ"},{"chaa","ቻ"},{"che","ቼ"},{"ch","ች"},{"cho","ቾ"},{"chua","ቿ"},
                                 {"na","ነ"},{"nu","ኑ"},{"ni","ኒ"},{"naa","ና"},{"ne","ኔ"},{"n","ን"},{"no","ኖ"},{"nua","ኗ"},
                                 {"gna","ኘ"},{"gnu","ኙ"},{"gni","ኚ"},{"gnaa","ኛ"},{"gne","ኜ"},{"gn","ኝ"},{"gno","ኞ"},{"gno","ኟ"},
                                 {"^a","አ"},{"^u","ኡ"},{"^i","ኢ"},{"^aa","ኣ"},{"^e","ኤ"},{"^a'","እ"},{"^o","ኦ"},{"^ua","ኧ"},
                                 {"'a","ዐ"},{"'u","ዑ"},{"'i","ዒ"},{"'aa","ዓ"},{"'e","ዔ"},{"'a'","ዕ"},{"'o","ዖ"},
                                 {"ka","ከ"},{"ku","ኩ"},{"ki","ኪ"},{"kaa","ካ"},{"ke","ኬ"},{"k","ክ"},{"ko","ኮ"},{"kua","ኯ"},                          
                                 {"wa","ወ"},{"wu","ዉ"},{"wi","ዊ"},{"waa","ዋ"},{"we","ዌ"},{"w","ው"},{"wo","ዎ"},
                                 {"za","ዘ"},{"zu","ዙ"},{"zi","ዚ"},{"zaa","ዛ"},{"ze","ዜ"},{"z","ዝ"},{"zo","ዞ"},{"zua","ዟ"},
                                 {"zha","ዠ"},{"zhu","ዡ"},{"zhi","ዢ"},{"zhaa","ዣ"},{"zhe","ዤ"},{"zh","ዥ"},{"zho","ዦ"},{"zhua","ዧ"},
                                 {"ya","የ"},{"yu","ዩ"},{"yi","ዪ"},{"yaa","ያ"},{"ye","ዬ"},{"y","ይ"},{"yo","ዮ"},{"yua","ዯ"},
                                 {"da","ደ"},{"du","ዱ"},{"di","ዲ"},{"daa","ዳ"},{"de","ዴ"},{"d","ድ"},{"do","ዶ"},{"dua","ዷ"},
                                 {"'da","ዸ"},{"'du","ዹ"},{"'di","ዺ"},{"'daa","ዻ"},{"'de","ዼ"},{"'d","ዽ"},{"'do","ዾ"},{"'dua","ዿ"},
                                 {"pha","ጰ"},{"phu","ጱ"},{"phi","ጲ"},{"pha","ጳ"},{"phe","ጴ"},{"ph","ጵ"},{"pho","ጷ"},
                                 {"tsa","ፀ"},{"tsu","ፁ"},{"tsi","ፂ"},{"tsaa","ፃ"},{"tse","ፄ"},{"ts","ፅ"},{"tso","ፆ"},{"tsua","ፇ"},
                                 {"'tsa","ጸ"},{"'tsu","ጹ"},{"'tsi","ጺ"},{"'tsa","ጻ"},{"'tse","ጼ"},{"'ts","ጽ"},{"'tso","ጾ"},{"'tsua","ጿ"},
                                 {"ja","ጀ"},{"ju","ጁ"},{"ji","ጂ"},{"jaa","ጃ"},{"je","ጄ"},{"j","ጅ"},{"jo","ጆ"},{"jua","ጇ"},
                                 {"ga","ገ"},{"gu","ጉ"},{"gi","ጊ"},{"gaa","ጋ"},{"ge","ጌ"},{"g","ግ"},{"go","ጎ"},{"gua","ጏ"},
                                 {"'ga","ጘ"},{"'gu","ጙ"},{"'gi","ጚ"},{"'gaa","ጛ"},{"'ge","ጜ"},{"'g","ጝ"},{"'go","ጞ"},{"'gua","ጟ"},
                                 {"ca","ጨ"},{"cu","ጩ"},{"ci","ጪ"},{"caa","ጫ"},{"ce","ጬ"},{"c","ጭ"},{"co","ጮ"},{"cua","ጯ"},                   
                                 {"fa","ፈ"},{"fu","ፉ"},{"fi","ፊ"},{"faa","ፋ"},{"fe","ፌ"},{"f","ፍ"},{"fo","ፎ"},{"fua","ፏ"},
                                 {"pa","ፐ"},{"pu","ፑ"},{"pi","ፒ"},{"paa","ፓ"},{"pe","ፔ"},{"p","ፕ"},{"po","ፖ"},{"pua","ፗ"},
                                 //NUMERALS, ARE NOT YET HANDLED IN THE CODE
                                 {"1","፩"},{"2","፪"},{"3","፫"},{"4","፬"},{"5","፭"},{"6","፮"},{"7","፯"},{"8","፰"},{"9","፱"},{"10","፲"},
                                 {"20","፳"},{"30","፴"},{"40","፵"},{"50","፶"},{"60","፷"},{"70","፸"},{"80","፹"},{"90","፺"},{"100","፻"},
                                 {"10000","፼"}                    
                                };

#endif

//TODO
  /*"ቈ","","ቊ","","ቋ","","ቌ","","ቍ","",
{"","ኀ"},{"","ኁ"},{"","ኂ"},{"","ኃ"},{"","ኄ"},{"","ኅ"},
{"","ኆ"},{"","ኇ"},	
                 ቘቚቛቜቝ
	ኈኊኋኌኍ
	ኰኲኳኴኵ
	ዀዂዃዄዅ
	ጐጒጓጔጕ
	ፘፙፚ
	፡ ። ፣ ፤ ፦ ፧ ፨  
*/


