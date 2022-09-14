#include "main.h"

/**
 * print_last_digit - prints the last digit of the integer
 * @n: n is the last the digit of a number
 * Description: prints the last digit of of a number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
