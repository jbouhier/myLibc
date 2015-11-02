# myLibc

## What is it
A remake of the standard libc that I've coded myself  
GNU C Library: https://www.gnu.org/software/libc    

## Why
For certain school C projects at ETNA, we are only allowed to use our own code.  
It is made to help students build their C skills by learning how to  
implement any necessary piece of code from the ground up.     

## Compiling
Cd into this project's directory   
Compile the static library with the command `make`   

## How to use it
Copy the libmy.a static library into your project's directory  
Complile your program with `gcc main.c <other_files.c> -L. -lmy` directly  
inside your terminal or by adding thoses instructions inside your project's Makefile  

Options:  
-L   specifies where is the library (-L. = current dir)  
-lmy specifies the name of the library (-l = lib, so -lmy = libmy.a)
No need to specify the .a at the end, the compiler knows it's a static lib  

### Author
Jean-Baptiste Bouhier
