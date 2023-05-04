#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer to array
  * @n: size of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i, str;

	for (i = 0; i < (n / 2); i++)
	{
		str = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = str;
	}
}
