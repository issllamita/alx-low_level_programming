#include "main.h"
#include <stdlib.h>
/**
  * array_range - function that creates an array of integer
  * @min: starting number
  * @max: ending number
  * Return: pointer to a newly array
  */
int *array_range(int min, int max)
{
	int *arr;
	int i, j, a;

	if (min > max)
	{
		return (0);
	}
	a = max - min;
	arr = malloc(sizeof(int) * (a + 1));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0, j = min; j <= max; i++, j++)
	{
		arr[i] = j;
	}
	return (arr);
}
