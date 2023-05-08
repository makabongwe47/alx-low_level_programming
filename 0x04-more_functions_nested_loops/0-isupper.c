#include "main.h"

/**
 *_isupper - checks for an uppercase character
 * @c: Variable text
 * Return: 1 if c is uppercase, or 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		{
		return (1);
		c++;
		}
		else
		{
		return (0);
		}
}
