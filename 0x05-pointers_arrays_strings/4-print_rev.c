#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: The string to be printed.
 *
 */

void print_rev(char *s)

{
	int i, l;

	s = "Holberton!";
	l = strlen(s);

	for (i = l-1; i >= 0; i--)
	{
		putchar(s[i]);
	}

}
