#include "main.h"

/**
* _isupper - function that checks for uppercase character.
* @c: input character to be check
* Return: 1 if c is uppercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
