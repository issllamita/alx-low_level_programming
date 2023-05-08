#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: pointer to string
  * @needle: pointer to string
  * Return: pointer to firsr occurence
  */
char *_strstr(char *haystack, char *needle)
{
	int i, l = 0, j, t = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (needle[l] != '\0')
	{
		l++;
	}
	for (i = 0; ((haystack[i] != '\0') && (t == 0)); i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
			{
				j++;
			}
			if (j == l)
			{
				return (&(haystack[i]));
				t = 1;
			}
		}
	}
	return (0);
}
