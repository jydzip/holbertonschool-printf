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
    _printf("Display character : %d\n", character);
    _printf("Display percentage : %%\n");
    _printf("Display unsigned int : %u\n", number);
    _printf("Display binary : %b\n", number2);

    return (0);
}
