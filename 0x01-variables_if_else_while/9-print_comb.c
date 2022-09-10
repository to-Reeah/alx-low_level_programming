#include <stdio.h>

/**
 * main - Prints numbers with commas and spaces.
 * Return: 0 if successful.
*/

int main(void)
{
	int val;

	val = 0;

	while (val < 10)
	{
		putchar((val % 10) + '0');
		if (val < 9)
		{
			putchar(',');
			putchar(' ');
		}
		val++;
	}

	putchar('\n');

	return (0);
}
