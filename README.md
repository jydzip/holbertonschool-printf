# _printf() - Function C

In this project, we are creating a function called `_printf()`.

This function formats a character string and returns it to the terminal output.
When the function completes correctly, it returns the number of characters printed.

It works like the function `printf()` on the `<stdio.h>` library.

## Requirements
- Ubuntu `20.04 LTS`
- GCC Language standard `gnu89`

## Way to Install Requirements
Installation gcc
```bash
$ sudo apt install build-essential
```

## Installation
```bash
$ git clone https://github.com/jydzip/holbertonschool-printf.git
$ cd holbertonschool-printf
```

## Compilation and run
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf
$ ./_printf
```

## Format Specifiers
| Function name  | Description          | Format |
| :---------------: |:---------------:| :-----:|
| [_print_char](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_char.c)  | Print a single character | `%c` |
| [_print_string](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_string.c) | Print a string of characters | `%s` |
| [_print_integer](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_integer.c) | Print an integer | `%i` |
| [_print_perc](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_perc.c) | Print a percentage | `%%` |
| [_print_unsigned_integer](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_unsigned_integer.c) | Print a unsigned integer | `%u` |
| [_print_binary](https://github.com/jydzip/holbertonschool-printf/blob/main/_print_binary.c) | Print a integer converted to binary | `%b` |

## Usage/Examples
Exemple of `main.c` for use `_printf()`
```c
#include "main.h"

int main() {
    int number = 10;
    int number2 = 105;
    char character = 'A';
    char string[] = "Hello, world!";
    int len;

    len = _printf("Display string : %s\n", string);
    _printf("Length of string displayed : %d\n", len);
    _printf("Display integer : %d\n", number);
    _printf("Display character : %c\n", character);
    _printf("Display percentage : %%\n");
    _printf("Display unsigned int : %u\n", number);
    _printf("Display binary : %b\n", number2);

    return (0);
}
```
#### STDOUT:
```c
Display string : Hello, world!
Length of string displayed : 31
Display integer : 10
Display character : A
Display percentage : %
Display unsigned int : 10
Display binary : 1101001
```
## Running Tests
To run tests, use the `main.c` of the `Usage/Examples` part.

And run the command:
```bash
$ ./main_tests.sh
```

## Flowchart
![Flowchart](https://raw.githubusercontent.com/jydzip/holbertonschool-printf/main/flowchart_printf.png)

- [Draw.io Visual online](https://drive.google.com/file/d/1bbmZoiwZpxJvjHjdXGxMmVAZxKR1Gzwt/view?usp=sharing)

## Authors
- [Edouard26](https://github.com/Edouard26)

- [Jydzip](https://github.com/jydzip)
