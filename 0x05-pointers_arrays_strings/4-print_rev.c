#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
