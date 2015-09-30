
#EN2AM

Why? I didn't like the way current converters work. They make my typing speed slow because each
group of characters are converted on the fly as one is typing and that makes me stop for a while
till I figure out where the caret is repositoned. So I thought best approach not to loose speed 
is to convert in batch mode on every line or on the event of some key hit.


#Requirement

C++11 compiler and CMake

#Building 

Currently only the cli is buildable. To build the cli 

> en2am> cd core

> en2am/core> cmake ..

> en2am/core> make


#Runnig

Currently the tool can only be used from the command line

example

>en2am

> Usage 
>
>  en2am [input_file_path] [output_file_path] 
>
>  en2am ["STRING"] 

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
