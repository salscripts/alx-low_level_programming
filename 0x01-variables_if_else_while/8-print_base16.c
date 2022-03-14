#include <stdio.h>

/**
 * main - prints the umbers of base 16
 * in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';
	int n = 48;

	while (n <= 58)
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
