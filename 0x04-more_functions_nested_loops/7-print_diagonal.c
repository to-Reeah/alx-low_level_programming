#include "main.h"
/**
 * * print_diagonal - prints diagonal line on the terminal
 * *@n: numbers of lines and columns
 * * Return: none
 * **/

void print_diagonal(int n)
{
	int c, j;

	for (c = 0; c < n; c++)
	{
		for (j = 0; j <= c; j++)
		{
			if (j != c)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

