#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: pointer to the first string
  * @src: pointer to the second string
  * @n: numbers of byte from src
  * Return: string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
