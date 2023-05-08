#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * on the terminal
 * @n:  is the number of times the character \
 * should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;
		int k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == j)
				_putchar('\\');
				else if (k < j)
				_putchar(' ');
		}
		_putchar('\n');
		}
	}
}
