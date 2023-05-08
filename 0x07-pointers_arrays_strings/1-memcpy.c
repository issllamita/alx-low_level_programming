#include "main.h"
/**
  * _memcpy - copies memory area
  * @dest: pointer to output string
  * @src: input string
  * @n: number of bytes from memory area src to memory area dest
  * Return: pointer dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
