#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @c: char to be tested
 *
 * prints a String
 * Return: Always 0 (Success)
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
