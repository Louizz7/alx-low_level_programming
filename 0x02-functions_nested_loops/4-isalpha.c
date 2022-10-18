#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic character.
 * @c - character argument
 * Return: Always 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}

