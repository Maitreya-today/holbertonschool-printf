
# C - printf :page_facing_up:

## Description :memo:
The printf() function sends a formatted string to the standard output (the display). This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’); these are listed in Table 2.1.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a (-1) upon error and "(null)" if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.

[![image1.png](https://i.postimg.cc/J7FVgvrR/image1.png)](https://postimg.cc/7bSWJBJR)

## Prototype :wrench:
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
## File Usage :camping: 
File Name | Description
--- | ---
[_printf.c](https://github.com) | The main _prinf.c file is used to handle the array containing all the format specifiers used. As well as where the function starts to execute.
[_get_print.c](https://github.com/tassavarat/printf/blob/master/get_print.c) | Contains main body of our code that uses loops and if statements in order to execute the functions connected to the format specifiers. As well as testing for any test cases.
[helper_functions.c](https://github.com) | Is where we placed all the helper functions used within our code. Because of Holberton School's limit of 5 helper functions per file, any other helper function files we will make in the future will only contain a max limit of 5 or less.
[main.h](https://github.com) | The header file we used to contain all our the prototypes used as well as containing our struct and the standard libraries used.
[man_3_printf](https://github.com) | The man page we created for our _printf function.
[helper_functions2.c](https://github.com) | Another file containing more helper functions. Specifically, the functions for our converter, reverse, and Rot13.
[helper_functions3.c](https://github.com) | Another file contain more helper functions. The file contains the functions t handle the hexidecimals and binary specifiers.

## Format Specifiers :pushpin:
The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`_print_char` | Prints a single character | `%c`
`_print_string` | Prints a string of characters | `%s`
`_print_percent` | Prints a % | `%%`
`_print_int` | Prints an integer in base 10| `%d` & `%i`
`_print_reverse` | Prints the string in reverse | `r`
`_print_rot13` | Converts the string into Rot13 | `R`
`_print_binary` | Prints the binary form of the integer | `b`
`_print_unsigned` | Prints an unsigned integer | `u`
`_print_octal` | Prints and octal number | `o`
`_print_hex_l` | Prints the lower case hexidecimal number | `x`
`_print_hex_u` | Prints the upper case hexidecimal number | `X`

## Compilation :thought_balloon:

Our code can be compiled in either example
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
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
Timmy@ubuntu:~/c/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

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

Clint Hendrickson / Manuel Zambrano
