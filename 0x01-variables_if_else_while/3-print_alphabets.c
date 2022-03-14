#include <stdio.h>

/**
 * main - print the alphabet in lowercase, then in
 * uppercase, followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';
	char e = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (e <= 'Z')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
