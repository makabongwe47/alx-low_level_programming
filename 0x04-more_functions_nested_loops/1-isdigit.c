#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: variable of a digit
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
		c++;
	}
	else
	{
		return (0);
	}
}
