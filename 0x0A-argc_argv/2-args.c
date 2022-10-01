#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: count the number of arguments
* @argv: array containing string of arguments
* Return: always success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

