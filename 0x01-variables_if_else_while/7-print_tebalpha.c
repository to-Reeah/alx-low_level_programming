#include <stdio.h>

/**
 * main - print lowercase in reverse.
 * Return: 0 on success.
*/

int main(void)
{
	char l;

	l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
