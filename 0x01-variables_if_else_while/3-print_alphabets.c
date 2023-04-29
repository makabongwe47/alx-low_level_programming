#include <stdio.h>
/*
 * main - Entry point
 * 
 * Decription: Prints the alphabets in lowercase and uppercase,
 * all these will be printed with the use of the ASCII values
 * which separate the upper and lowercase characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
/*
 * ASCII value of a = 97
 * ASCII value of z = 122
 */
	for (i = 97; i <= 122; i++)
	{
/*
 * The ASCII can be taken from i and display its character
 * equivalent
 */
		putchar(i);
	}
/*
 * ASCII value of A = 65
 * ASCII value of Z = 90
 */
	for (i = 65; i <= 90; i++)
	{
/*
 * The ASCII can be taken from i and display its character
 * eqivalent
 */
		putchar(i);
	}
	putchar('\n');
	return (0);
}


