#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;

	int n = 0;

	while (n <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		n++;
	}
}
