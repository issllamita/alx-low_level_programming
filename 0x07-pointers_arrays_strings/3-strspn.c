#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer to string
  * @accept: character
  * Return: length
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; (s[i] != ' ' && s[i] != '\0'); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
