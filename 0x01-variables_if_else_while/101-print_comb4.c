#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; d < 100; d++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n')

		return (0);
}
