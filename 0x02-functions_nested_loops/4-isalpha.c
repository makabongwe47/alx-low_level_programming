#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: is the character that is being checked
 * Return: 1 if c is a letter, othrwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
