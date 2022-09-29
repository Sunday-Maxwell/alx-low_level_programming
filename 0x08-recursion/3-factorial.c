#include "main.h"

/**
* factorial - function that returns the factorial of a given number
* @n: given number
* Return: always 0;
*/

int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	if (n == 0 || n == 1)
	{
		return(1);
	}
	else
	{
		n = n * factorial(n - 1);
		return(n);
	}
}
