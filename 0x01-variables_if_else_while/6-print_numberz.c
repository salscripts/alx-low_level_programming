#include <stdio.h>

/**
 * main - print all single digit numbers of
 * base 10 starting from 0
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	for (n = 48; n < 58 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
