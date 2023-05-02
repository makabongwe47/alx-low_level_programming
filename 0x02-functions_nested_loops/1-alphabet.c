#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase
 * and followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
