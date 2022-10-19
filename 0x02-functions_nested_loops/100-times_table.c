#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input integer
 * Return: Always 0
 */

void print_times_table(int n)
{
	int a, b, k;

	if (n >= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				k =  a * b;

					if (b == 0)
					{
						_putchar( k + 'o');
					}
					else if
						(k < 10 && b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if
						(k >= 10 && k < 100)
					{
						_putchar(',');
					       	_putchar(' ');
				       		_putchar(' ');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else if
						(k >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar(((k /10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
			}
			_putchar('\n');
		}
	}
}
