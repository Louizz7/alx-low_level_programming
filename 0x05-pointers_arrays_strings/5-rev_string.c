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

	while (s[len1++])
		len1++;

	for (i = len1 - 1; i >= len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2 - i - 1];
		s[len2 - i - 1] = tmp;
	}
}
