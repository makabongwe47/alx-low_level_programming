#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size:  is the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int l;
		int m;

		for (l = 0; l < size; l++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
