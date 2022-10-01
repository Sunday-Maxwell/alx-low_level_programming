#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: counts the number of arguments
* @argv: array of strings of arguments
* Return: always success
*/

int main(int argc, char *argv)
{
	int i, mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * strtol(argv[i], null, 10);
		printf("%d\n", mul);
	}
	return (0);
}
