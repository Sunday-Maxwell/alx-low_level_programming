#include "main.h"

/**
* *_memset - function that fills the constant memory
* @s: address of memory to be filled
* @b: value to be filled
* @n: size of bytes to be filled
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; i++)
	{
		s[m] = b;
	}
	return (s);
}
