#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98, followed by a new line
 * @x: print starting from this int
 */

void print_to_98(int x)
{
	int i, j;

	if (x <= 98)
	{
		for (i = x; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
			}
		} else if (x >= 98)
		{
			for (j = x; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
}
