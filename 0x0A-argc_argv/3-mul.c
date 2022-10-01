#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: counts the number of arguments
* @argv: array of strings of arguments
* Return: always success
*/

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
	}
	printf("Error\n");
	return (1);
}
