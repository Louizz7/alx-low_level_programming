#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 */

void rev_string(char *s)

{
	int len1 = 0, len2 = 0;

	char tmp;

	while (s[len1++])
		len1++;

	for (len2 = len1 - 1; len2 <= len1 / 2; len2++)
	{
		tmp = s[len2];
		s[len2] = s[len1 - len2 - 1];
		s[len1 - len2 - 1] = tmp;
	}
}
