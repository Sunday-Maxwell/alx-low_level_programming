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
	int i, sum = 0;
	
	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
			sum++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
