#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int i;
		
	//ASCII value of a = 97 and z = 122
	//ASCII characters from 97 to 122 are lowercase alphabets
		for (i = 97; i <= 122; i++)
		{
			//The integer i with %c will be converted to a character
			//Before printing .%c will take its equivalent character value
			putchar("%c ", i);
		}
		putchar('\n');
		return (0);
}
