#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: number of argument
* @argv: array containing the program
* Return: Always success
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
