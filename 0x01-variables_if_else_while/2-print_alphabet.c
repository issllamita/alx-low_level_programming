#include <stdio.h>
/**
  * main - program that prints the aphabet in lowcase
  * Return: alawys 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
