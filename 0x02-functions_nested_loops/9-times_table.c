#include  "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
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
			d = (j * n);

			if((d / 10) > 0)
			{
				_putchar ((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
		_putchar('\n');
	}
}