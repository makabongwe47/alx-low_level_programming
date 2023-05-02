#include "main.h"

/**
 Description: Prints alphabets in lowercase
 * and followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
