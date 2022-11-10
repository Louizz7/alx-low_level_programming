#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return: pointer to the address of the memory block
 */

int *array_range(int min, int max)

{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}
