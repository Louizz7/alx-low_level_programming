#include "main.h"

/**
 * print_number - Prints an integer.
 * @x: The integer to be printed.
 */

void print_number(int x)

{
	unsigned int num = x;

	if (x < 0)
	{
		_putchar('-');

		num = -num;
	}

	if ((num / 10) > 0)

		print_number(num / 10);

	_putchar((num % 10) + '0');
}
