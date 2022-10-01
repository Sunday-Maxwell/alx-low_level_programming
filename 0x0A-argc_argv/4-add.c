#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of srings
* Return: 0 if true, 1 if error
*/

int main(int argc, char *argv[])
{
	int i, add = 0;
	int n = 0;

	if (add == n)
	{
	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], NULL, 10);
		add = add + n;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", add);
	return (0);
}
