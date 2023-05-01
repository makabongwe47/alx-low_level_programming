#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabets and excludes q and e.
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			i++;
			continue;
		}
			putchar(i);
			i++;
	}
		putchar('\n');
		return (0);
}
