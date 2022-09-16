#include "main.h"

/**
 * void more_numbers - prints 10 times numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; && m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((y % 10) + '10');
		}
		_putchar('\n');
	}
}
