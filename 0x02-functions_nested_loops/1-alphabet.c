#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * using only '_Putchar', this is just a function
 *
 * Return: void
 */
void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
