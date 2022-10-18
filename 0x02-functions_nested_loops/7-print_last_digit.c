#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: a digit
 * Return: last digit
 */

int print_last_digit(int a)
{
	int pld;

	if (a < 0)
		a = -a;
	pld = (a % 10);
	_putchar (pld + '0');
	return (pld % 10);
}

