#include "main.h"
int _palin(int i, char *s, int l);
/**
  * is_palindrome - checks if a string is palindrome
  * @s: pointer to string
  * Return: 1 if a palindrome otherwise 0
  */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (_palin(0, s, l));
}
/**
  * _palin - checks if a string is palindrome or not
  * @s: pointer to string
  * @l: length of the string
  * @i: integer
  * Return: 1 if a palindrome otherwise 0
  */
int _palin(int i, char *s, int l)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (i == (l / 2))
	{
		return (1);
	}
	if (s[i] != s[(l - 1) - i])
	{
		return (0);
	}
	else
	{
		return (_palin(i + 1, s, l));
	}
}
/**
  * _strlen_recursion - gives the length of a string
  * @s: pointer to string
  * Return: int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
