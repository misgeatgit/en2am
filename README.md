
#EN2AM

Why I created it? I didn't like the way current converters work. They slow down my typing speed because each
group of characters are converted on the fly as I am typing another, causing me to stop for a while
until I am able to figure out where the caret has been repositoned. I thought the best approach to not loosing speed 
would be to convert it using batch mode on every line or in the event of a key hit.


#Requirement

C++11 compiler and CMake

#Building 

Currently only the cli is buildable. To build the cli 

> en2am> mkdir build && cd build

> en2am/build> cmake ..

> en2am/build> make


#Runnig

Currently the tool can only be used from the command line

example

>en2am/build> ./en2am

> Usage 

> en2am [input_file_path] [output_file_path] 

> en2am <"STRING">

>en2am/core> ./en2am  "yh ya^ityophyaa hzb dmts naw"

>ይህ የኢትዮጵያ ህዝብ ድምፅ ነው  

**Note:** You may use programs like [xclip](http://linux.die.net/man/1/xclip) for transferrign CLI text to teh OS's clipboard.
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
