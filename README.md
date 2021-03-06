# Calculator
A program written in C++ and using FLTK to create a calculator.
## Objective
Around spring of 2021, I was learning OOP and part of the class involved using a GUI framework. This was FLTK. I was kind of curious about how I could learn about GUI programming, so I made the decision to create a calculator using this framework.
## Compiling
Before we begin, I only know of how to do this in Windows and JSLinux. I will try to put in time to make this work on other platforms, but for now Windows is the only way for this to work.
### MSYS2
Another thing to note, I used MSYS2 to install the FLTK libraries and compile the program, so this will be required (at least in how I'm able to compile it, I'll try to find another way to not use MSYS2).

Let's begin, install ```MSYS2``` and when done, run ```MSYS2 MinGW 64-bit```.

Once in, run the command ```pacman -S mingw-w64-x86_64-fltk```. 

This will install the library necessary to compile the program.

This is all for now, let's move to actually compiling.

### Command Line
Go ahead and make a copy of the files, or ```git clone``` the repo, and head into the directory.

There, you will then run ```g++ *.cpp *.cxx `fltk-config --ldflags --cxxflags --use-images```.

If all goes well, the compilation should run fine and you'll be able to see the calculator.

## To-do
- Implement proper functionality of all operators.
- Implement functions for all numbers.
- Implement sign switching.
- Implement percentage buttonf functionality.
## Credits
- Calculator is based in part on the work of the FLTK project (http://www.fltk.org).
