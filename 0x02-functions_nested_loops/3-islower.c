#include "main.h"

/**
 * Description: Function that checks for lowercase character
 * Returns 1 if c is lowercase
 *
 * Returns: 0
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
