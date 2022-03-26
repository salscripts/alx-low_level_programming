#include <stdio.h>

/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, max = 1024, sum = 0;

	for (x = 0; x < max; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
