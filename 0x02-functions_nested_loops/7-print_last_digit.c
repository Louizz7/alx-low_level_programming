#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: a digit
 * Return: last digit
 */

int print_last_digit(int a)
{
	int print_last_digit;
	n = (a % 10);

	if (print_last_digit < 0)
	{
		print_last_digit (-1 * print_last_digit);
	}
	_putchar(print_last_digit + '0');
	return (print_last_digit);
}
