#include "main.h"
#include <stdlib.h>
/**
  * _realloc - function that reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size of the allocated space for ptr
  * @new_size: new size of the new memory
  * Return: pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		free(ptr);
		return (new_p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_p = malloc(new_size);
	if (new_p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)new_p + i) = *((char *)ptr + i);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			*((char *)new_p + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_p);
}
