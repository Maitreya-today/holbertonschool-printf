
# C - printf :page_facing_up:

## Description :memo:
The printf() function sends a formatted string to the standard output.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a (-1) upon error and "(null)" if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.


## Flowchart
![68747470733a2f2f692e696d6775722e636f6d2f536a71495573372e706e67](https://user-images.githubusercontent.com/105505927/178279750-67811154-48ec-4467-9dc4-e89813768989.png)

## Prototype :wrench:
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
## File Usage :camping: 
File Name | Description
--- | ---
[_printf.c](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/_printf.c)| The main _prinf.c file is used to handle the array containing all the format specifiers used. As well as where the function starts to execute.
[itoa.c](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/itoa.c) | File holding function used to convert int data type to string data type in C language.
[_putchar.c](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/_putchar.c)| function int putchar(int char) writes a character (an unsigned char) specified by the argument char to stdout.
[main.h](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/main.c) | The header file we used to contain all our the prototypes used as well as containing our struct and the standard libraries used.
[man_3_printf](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/man_3_printf) | The man page we created for our _printf function.
[utils.c](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/utils.c) | Utility file to handle _strlen function.
[handler.c](https://github.com/Maitreya-today/holbertonschool-printf/blob/master/handler.c) | Handler file used to hold the percent format specifiers.

## Format Specifiers :pushpin:
The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`print_char` | Prints a single character | `%c`
`print_string` | Prints a string of characters | `%s`
`print_integer` | Prints an integer in base 10| `%d` & `%i`
`print_rev_string` | Prints the string in reverse | `r`
`print_rot` | Converts the string into Rot13 | `R`
`print_binary` | Prints the binary form of the integer | `b`
`print_pointer` | Prints a number in hexadecimal format | `p`
`print_unsigned` | Prints an unsigned integer | `u`
`print_octal` | Prints and octal number | `o`
`print_hexadecimal_low` | Prints the lower case hexidecimal number | `x`
`print_hexadecimal_upp` | Prints the upper case hexidecimal number | `X`

## Compilation :thought_balloon:

Our code can be compiled in either example
```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
```
or (if you want to test for unknown format specifiers)

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

## Testing the Program :pick::pick:

### The main.c File Test
You'll make a main.c file to test the program, in order to see if the custom _printf function works exactly like how regular printf manages to display the number of characters printed.
The main.c file should contain the code displayed below. (Feel free to change the code inside main.c to test for any other test cases not currently displayed.)
```
$:~/c/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
### Authors 

Clint Hendrickson | (https://github.com/Maitreya-today)

Manuel Zambrano | (https://github.com/mnlazs)
