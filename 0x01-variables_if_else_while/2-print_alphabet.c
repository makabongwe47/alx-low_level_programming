#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c[26] = "abcdefghijklmnopqrstuvwxyz";
	
	int i;

		for (i = 0; i < 26; i++)
		{
			putchar(c[i]);
		}
		putchar('\n');
		return (0);
}
