#include "main.h"

/**
* set_string - function that set the value of a pointer to a char
* @s: value to be copied
* @to: string to be replaced
*/

void set_string(char **s, char *to)
{
	*s = to;
}
