#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory and cheks if successful
  * @b: the size of memory to allocate
  * Return: a pointer to memory allocate
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
