#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
int main(void)
{
	long x, z;

	x = 612852475143;

	for (z = 2; x > z; z++)
	{
		while (x % z == 0)
		{
			x = x / z;
		}
	}
	printf("%lu", z);
	putchar('\n');
	return (0);
}
