#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: a digit
 * Return: last digit
 */

int print_last_digit(int a)
{
	int n;
	n = (a % 10);

	if (n < 0)
	{
		n (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}
