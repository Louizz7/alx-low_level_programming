#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int i, l;
	s = "hello"
	l = strlen(s);
	for (i = l-1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
