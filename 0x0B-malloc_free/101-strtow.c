#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: next index to check of source string
 */
char **strtow(char *str)
{
	char **newstr;
	int i = 0, j = 0, str_len = 0, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;
	words = word_count(str, str_len);
	if (!words)
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	mallocmem(newstr, str, str_len);
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			i = strncat_mod(newstr[j], str, i, str_len);
			j++, i--;
		}
		i++;
	}
	newstr[words + 1] = NULL;
	return (newstr);
}

/**
 * word_count - counts words in input string
 * @str: input string
 * @str_len: string length
 * Return: 0 on failure, words on success
 */

int word_count(char *str, int str_len)

{
	int i = 0, words = 0;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++;
			words++;
		}
		i++;
	}
	if (words == 0)
		return (0);

	return (words);
}

/**
 * len - returns length of str
 * @str: string to be counted
 * Return: length of the string
 */

int len(char *str)

{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
