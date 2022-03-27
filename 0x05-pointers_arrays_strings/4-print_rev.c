#include "main.h"

/**
 * print_rev - print a string in reverse followed
 * by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int c = 0, i, length;

	while (s[c] != '\0')
	{
		c++;
	}
	length = c;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
