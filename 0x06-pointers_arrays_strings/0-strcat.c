#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: pointer to the first string
  * @src: pointer to the second string
  * Return: string dest
  */
char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*pt != '\0')
	{
		pt++;
	}
	while (*src != '\0')
	{
		*pt++ = *src++;
	}
	*pt = '\0';
	return (dest);
}
