#include "main.h"

/**
 * _puts - Prints a string.
 *
 * @str: parameter to _puts function
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
