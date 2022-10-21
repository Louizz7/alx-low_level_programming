#include "main.h"

/**
 * print_square - prints square of size size
 * @size: size of square
 * Return: void
 */

void print_square(int size)

{
	int z, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= size; z++)
		{
			_putchar('#');

			for (b = 1; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
