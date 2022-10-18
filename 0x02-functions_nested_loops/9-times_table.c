#include  "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * j = row, n = column, x = result
 * Remove: Always 0
 */

void times_table(void)
{
	int j;
	int n;
	int x;
	
	for (j = '0'; j <= '9'; j++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (n = 1; n <= 9; n++)
		{
			x = (j * n);

			if((x / 9) > 0)
			{
				_putchar ((x / 9) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((x % 9) + '0');

			if (n < 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
