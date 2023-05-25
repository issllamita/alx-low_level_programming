#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - sums all the parameters
  * @n: first parameter
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)

		sum = sum + va_arg(p, int);
	va_end(p);
	return (sum);
}
