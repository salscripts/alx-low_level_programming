#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 * 10 times
 */
void more_numbers(void)
{
	int i, x = 0;

	while (x < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		x++;
	}
}
