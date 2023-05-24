#include <stdlib.h>
#include <stdio.h>
/**
  * main - program that prints the opcodes of its own main function
  * @argc: the number of arguments
  * @argv: array of string
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*mlocation)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)mlocation;
		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		mlocation++;
	}
	printf("\n");
	return (0);
}
