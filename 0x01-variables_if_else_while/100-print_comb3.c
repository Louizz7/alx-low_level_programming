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

	int i;

	for (d = 0; d < 100; i++)
	{

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i != 99)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
