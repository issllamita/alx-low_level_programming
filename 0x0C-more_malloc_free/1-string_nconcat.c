#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - function that concatenates two strings
  * @s1: base string to concatenate to
  * @s2: string to copy from
  * @n: max number of byte from s2 to concatenate
  * Return: a pointer to new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;
	new = malloc(sizeof(char) * (l1 + n + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		new[i] = s1[i];
	for (j = 0; j < n; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
