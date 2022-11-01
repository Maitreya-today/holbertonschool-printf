#include "main.h"

/**
 * print - print a string
 * strlen - Calculate the length of a string
 * @str: String
 * Return: lala 
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)

	return (i);
}
/**
 * print - print char.
 * @str: string.
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}

