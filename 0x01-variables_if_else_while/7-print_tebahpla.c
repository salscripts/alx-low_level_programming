#include <stdio.h>

/**
 * main - prints lowercase letters in reverse
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
