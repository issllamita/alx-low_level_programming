#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: pointer to string
  * @accept: pointer
  * Return: number of bytes in the initial segment of s
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	while ((s[i] != '\0') && (k == 0))
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
				k = 1;
			}
		}
		i++;
	}
	return (0);
}
