#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: a digit
 * Return: last digit
 */

int print_last_digit(int a)
{
	int PLD;
	PLD = (a % 10);

	if (PLD < 0)
	{
		PLD (-1 * PLD);
	}
	_putchar(PLD + '0');
	return (PLD);
}
