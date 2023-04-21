#include <stdio.h>
/**
  * main - program prints numbers from base 10 startinf by 0
  * Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
