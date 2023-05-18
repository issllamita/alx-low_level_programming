#include "main.h"
#include <stdlib.h>
/**
  * _calloc - functions that allocates memory for an array
  * @nmemb: number of elements
  * @size: size of array
  * Return: pointer to the allocate memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		a[i++] = 0;
	}
	return (a);
}
