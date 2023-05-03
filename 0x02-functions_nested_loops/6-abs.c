#include "main.h"

/**
 * _abs - Computes the absolute value of an int
 * @n: int to check
 * Return: the absolute value of an int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
