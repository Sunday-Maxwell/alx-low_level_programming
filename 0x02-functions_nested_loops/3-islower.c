#include "main.h"

/**
 * int_islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		/* refer int c */
		if (c == alpha)
		{
			return (1);
		}
	}
	return (0);
}
