# Project Title

_PRINTF: In this project, we are creating a function called _printf. It works like the function printf on the <stdio.h> library.

# Description

We dissect the function in 4 subfunctions:

int _print_char(va_list args): print a char
int _print_integer(va_list args): print an integer
int _print_string(va_list args): print a string
int _print_perc(va_list args): print a percentage sign

# Compilation Command

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

# Requirements

Editor: VI
All files will be compiled on Ubuntu 20.04 LTS.
A README.md file, at the root of the folder of the project is mandatory.
Code is using the Betty syle.
Global variables is not allowed.
Cannot use more than 5 functions per file.
Prototypes of all functions should be included in a header file called main.h.

# Example

_printf("Hello World")

stdout: Hello World
