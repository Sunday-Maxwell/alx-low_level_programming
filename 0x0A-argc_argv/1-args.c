#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: number of arguments
* @argv: array containing the program arguments
* Return: Always success
*/

int main(int argc, char *argv[])
{
	int i;
	{
		(void) argv;
	}
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
