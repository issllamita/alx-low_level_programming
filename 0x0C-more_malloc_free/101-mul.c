#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _mul - function that multiplies two positive numbers
  * @num1: first number
  * @num2: second number
  * Return: 0 always success
  */
int _mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of string
  * Return: integer
  */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", _mul(num1, num2));
	return (0);
}
