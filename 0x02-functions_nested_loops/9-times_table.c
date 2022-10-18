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
		for (n = '0'; n <= '9'; n++)
		{
			x = j * n;

			if ((x / 10) == 0)
			{
				if (n != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (n == 9)
					continue;
				_putchar (',');
				_putchar (' ');
			}
			else
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n ==9)
				continue;
			_putchar (',');
			_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
