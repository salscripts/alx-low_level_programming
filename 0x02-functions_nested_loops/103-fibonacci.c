#include <stdio.h>

/**
 * main - print the fibonacci sequence
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	long int i, x = 1,y =2, sum, totalsum;

	for (i =0; i < 40; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			totalsum += y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", totalsum);
	return (0);
}
