#include <stdio.h>
/*
 * main - Entry point
 *
 * Decription: Prints the alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void) /*This function will return an integer value*/
{
	int i;
	int j;
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
	for (j = 65; j <= 90; j++)
	{
/*
 * The ASCII can be taken from i and display its character
 * eqivalent
 */
		putchar(j);
	}
	putchar('\n');
	return (0);
}


