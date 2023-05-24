#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - add two numbers
  * @a: first number
  * @b: second number
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - substract a from b
  * @a: first number
  * @b: second number
  *
  * Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiply two numbers
  * @a: first numb
  * @b: second numb
  *
  * Return:  the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div: division of two numbers
  * @a: first number
  * @b: second number
  *
  * Return: te result of the division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - the remainder of the division of a by b
  * @a: first number
  * @b: second number
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
