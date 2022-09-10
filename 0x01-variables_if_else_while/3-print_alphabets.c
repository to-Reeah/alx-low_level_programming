#include <stdio.h>

/**
 * main - Determine lower and upper case alphabets.
 * Return: 0
*/

int main(void)
{
	char v;
	char V;

	v = 'a';
	V = 'A';

	while (v <= 'z')
	{
		putchar(v);
		v++;
	}

	while (V <= 'Z')
	{
		putchar(V);
		V++;
	}

	putchar('\n');

	return (0);
}
