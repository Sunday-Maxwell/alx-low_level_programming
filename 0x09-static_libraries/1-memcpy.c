#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: pointer to the destination where content is to be copied
* @src: the string to be copied
* @n: the size of the area (byte) to be copied
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
		return (dest);
}
