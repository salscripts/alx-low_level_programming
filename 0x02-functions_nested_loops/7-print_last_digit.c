#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit to be printed
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (-1 * (n % 10));
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = (n % 10);
		_putchar(a + '0');
		return (a);
	}
}
