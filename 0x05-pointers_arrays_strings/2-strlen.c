#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be passed.
 * Return: The length of @s.
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s++)
		len++;

	return (len);

}
