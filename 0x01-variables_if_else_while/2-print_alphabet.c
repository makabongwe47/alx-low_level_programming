#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;	
/*
 * ASCII value of a = 97
 * ASCII value for z = 122
 */
		for (i = 97; i <= 122; i++)
		{
/*
 * The ASCII should be taken from i and display
 * its character equivalent
 */
			putchar(i);
		}
		putchar('\n');
		return (0);
}
