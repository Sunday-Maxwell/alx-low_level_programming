#include "main.h"

/**
 * void more_numbers - prints 10 times numbers from 0 to 14
 *@i: value of nubers to be printed
 */

void more_numbers(void)
{

	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
