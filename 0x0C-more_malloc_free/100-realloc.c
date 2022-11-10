#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size in bytes of memory allocated space
 * @new_size: new size in bytes of memory to be allocated
 * Return: void pointer to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < (old_size, new_size); i++)
				*((char *)temp_block + i) = *((char *) ptr + i);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
