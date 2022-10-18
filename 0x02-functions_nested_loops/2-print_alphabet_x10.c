#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);
{
	char ch = 'a';
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch)
		}
		_putchar('\n')
	}
