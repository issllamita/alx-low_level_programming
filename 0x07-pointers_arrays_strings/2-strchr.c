#include "main.h"
#include <stddef.h>
/**
  * _strchr - locates a character in a string
  * @s: pointer to a string
  * @c: character
  * Return: pointer to the first occurrence of the character c
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
