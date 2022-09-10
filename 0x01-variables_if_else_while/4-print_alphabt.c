#include <stdio.h>

/**
 * main - Prints lower case except q and e to stdout.
 * Return: 0 on success.
*/
int main(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		putchar(i);

		i++;
	}
	putchar('\n');

	return (0);
}
