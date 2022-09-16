#include "main.h"
#include <stdio.h>
/**
* _isupper - function that checks for uppercase character.
* @c: input character to check
* Return: int 1 if c is uppercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
