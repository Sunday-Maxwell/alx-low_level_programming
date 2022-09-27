#include "main.h"

/**
* _strchr - function that loates a character in a string
* @s: the string of character
* @c: the character to be located
* Return: a pointer (s) if found or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			s++;
		}
			if (*s == c)
			{
				return (s);
			}
		return (0);
}
