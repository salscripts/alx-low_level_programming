#include <stdio.h>

/**
 * main - prints the first 50 fiboacci numbers,
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, x = 1, y = 2, sum;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", x);
		sum = x + y;
		x = y;
		y = sum;

		if (i == 48)
		{
			printf("%ld\n", x);
		}
	}
	return (0);
}
