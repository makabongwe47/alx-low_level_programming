#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

