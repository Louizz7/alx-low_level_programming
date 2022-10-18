#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: Always 0
 */

void jack_bauer(void)
{
	int a;
	int b;

	for ( a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)

			if (a < 10)
			{
				_putchar ('0');
				_putchar (1 + '0');
			}
			else if (a >= 10)
			{
				_putchar ((a/10) + '0');
				_putchar ((a % 10) + '0');
			}
			if (b < 10)
			{
				 _putchar (':');
				 _putchar ('0');
				 _putchar (b + '0');
			}
			else if (b > 10)
				_putchar (':');
		       		_putchar ((b/10) + '0');
			       	_putchar ((b % ) + '0');
	}
	_putcher("\n");
}

