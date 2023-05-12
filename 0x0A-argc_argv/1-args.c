#include "main.h"
#include <stdio.h>
/**
  * main - prints the number of arguments passed into the program
  * @argc: number of command line arguments
  * @argv: array of string
  * Return: always 0
  */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
