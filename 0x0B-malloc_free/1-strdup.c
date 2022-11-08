#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly alloctaed
 * space in memory which contains a copy of the string passed.
 * @str: pointer to string being duplicated.
 * Return: NULL if str is NULL.
 */

char *_strdup(char *str)

{
	char *cpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[len] = '\0';

	return (cpy);
}
