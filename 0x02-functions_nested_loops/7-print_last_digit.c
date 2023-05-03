#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: int that the last digit will be obtained from 
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int d;
	d = n % 10;

	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
