#include "main.h"
/**
  * _isalpha - checks for alphabetic character
  * @c: charater in the ASCII table
  * Return: 1 for letter,lowercase or uppercase
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
