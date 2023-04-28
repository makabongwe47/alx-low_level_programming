#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the last digit of the number stored in variable n and determine whether that last digit is greater than 5, less than 6, equal to 0 or not equal to zero.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,  n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,  n % 10);
	}
	else if ((n % 10) < 6 && ( n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);

}
