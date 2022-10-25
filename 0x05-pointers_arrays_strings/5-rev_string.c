#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 */

void rev_string(char *s)

{
	int len1 = 0, len2 = 0, i;

	char tmp;

	while (s[len1] ! = '\0')
		len1++;

	for (i = 0; i < len1; i++)
	{
		tmp = s[i];
		s[i] = s[len2 = len1 - 1];
		s[len2 = len1 - 1] = tmp;
	}
}
