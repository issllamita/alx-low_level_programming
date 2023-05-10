#include "main.h"
/**
  * _pow_recursion - calculate a power of a number
  * @x: the base
  * @y: the exponet
  * Return: value of x
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
