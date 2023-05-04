#include "main.h"
/**
  * _strncpy - copies the second string to the first
  * @dest: pointer to the firsr string
  * @src: pointer to the second string
  * @n: number of taken elements from second element
  * Return: pointer to char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
