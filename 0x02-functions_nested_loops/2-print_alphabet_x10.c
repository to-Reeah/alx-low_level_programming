#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
		int l;
		int k;

		for (l = 0; l < 10; l++)
		{
			for (k = 0; k < 26; k++)
				_putchar('a' + k);
			_putchar('\n');
		}
}
