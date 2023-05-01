#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Prints the alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
	}

	while (j <= 90)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
