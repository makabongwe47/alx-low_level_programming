#include "main.h"

/**
 * _islower - Checks whether the char is a lowercase
 * @c: is the character that is being checked.
 * Return: 1 if c is lowercase,0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
