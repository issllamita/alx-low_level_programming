#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - function that search for an integer
  * @array: pointer to array
  * @size: number of elements in the array
  * @cmp: pointer to function
  * Return: the index of the first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
