
#EN2AM

I started this project because I didn't find the current amharic typing natural.
Peole are striving to type fast and thus typing in english that gives an amharic meaning when
read by others.I have attempted to implement a converter that adheres to the need of the above
kind of people. i.e type fast in english but get it in amharic on the fly.I think this is cooler
than Power geez.

#Requirement

C++11 compiler and CMake

#Runnig

Currently the tool can only be used from the command line

example

>en2am  "yh ya^ityophyaa hzb dmts naw"

>ይህ የኢትዮጵያ ህዝብ ድምፅ ነው  

**Note:** You may use programs like xclip for transferrign CLI text to teh OS's clipboard.
eg. on linux:

> en2am  "yh ya^ityophyaa hzb dmts naw" | xclip -selection clip

All mappings are found in core/en2am.h

##Todo

- [ ] GUI client
- [ ] Mobile client
- [ ] Make user configurable mapping
- [ ] Package program for V1 beta release

##References

[http://www.omniglot.com/writing/ethiopic.htm]
