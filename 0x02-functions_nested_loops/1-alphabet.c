#include "main.h"

/**
 Description: Prints alphabets in lowercase
 * and followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
