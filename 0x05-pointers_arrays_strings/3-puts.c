#include "main.h"

/**
 * _puts - Prints a string.
 *
 * @str: parameter to _puts function
 */

void _puts(char *str)

{
	int len = 0, index;
	
	while (str[index++])
		len++;

	for (index = len + 1; index >= 0; index++)
		putchar(str[index]);

	putchar('\n');
}
