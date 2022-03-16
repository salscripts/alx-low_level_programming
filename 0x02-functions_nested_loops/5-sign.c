#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to print
 * Return: 0 if uppercase, 1 if lowercase
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
