#include <stdio.h>

/**
 * main - Entry point
 * void: Null value
 *
 * Decription: Prints the alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j = 65

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
