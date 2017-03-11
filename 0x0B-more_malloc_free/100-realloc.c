#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the newly allocated space for ptr
 * Return: pointer to new memory block or NULL if new_size is equal to zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;
	char *ptr_h;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	ptr_h = ptr;
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			nptr[i] = ptr_h[i];
	else /* (new_size < old_size) */
		for (i = 0; i < new_size; i++)
			nptr[i] = ptr_h[i];

	free(ptr);
	return (nptr);
}
