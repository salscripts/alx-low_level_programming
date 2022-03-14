#include <stdio.h>

/**
 * main - print all single digit numbers of
 * base 10 starting from 0
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		putchar("%d", n);
	}
	putchar('\n');
	return (0);
}
