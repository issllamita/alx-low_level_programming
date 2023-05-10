#include "main.h"
int _prime(int i, int n);
/**
  * is_prime_number - checks if a number is prime or not
  * @n: int
  * Return: 1 if prime otherwise 0
  */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
/**
  * _prime - checks if a number is prime or not
  * @n: int
  * @i: int
  * Return: 1 if prime otherwise 0
  */
int _prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i > n)
	{
		return (1);
	}
	if (((n % i) == 0) && (n != i))
	{
		return (0);
	}
	else
	{
		return (_prime(i + 1, n));
	}
}
