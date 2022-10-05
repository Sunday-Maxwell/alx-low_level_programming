#include "main.h"
#include <stdlib.h>
/**
* create_array - creates arrays of chr and initialize it with a specific char
* @size: number of the array
* @c: initialized character
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
	position = 0;
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}
	return (buffer);
	}
}
