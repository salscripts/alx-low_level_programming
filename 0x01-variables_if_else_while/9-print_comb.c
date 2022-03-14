#include <stdio.h>

/**
 * main - prints all the possible combinations
 * of single digit numbers
 * Return: 0 if exited properly, non_zero otherwise
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
