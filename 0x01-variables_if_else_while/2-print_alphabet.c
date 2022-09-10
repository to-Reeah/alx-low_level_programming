#include <stdio.h>

/**
 * main - Prints alphabets in lower case to stdout.
 * Return: 0 if successful.
*/

int main(void)
{
	char dune;

	dune = 'a';

	while (dune <= 'z')
	{
		putchar(dune);
		dune++;
	}

	putchar('\n');

	return (0);
}
