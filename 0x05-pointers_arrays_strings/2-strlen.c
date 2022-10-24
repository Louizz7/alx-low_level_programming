#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 * @len: length
 * Return: The length of @str.
 */

size_t _strlen(const char *str)

{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);

}
