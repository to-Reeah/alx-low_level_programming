#include "main.h"

/**
* print_line - function that draws a straight line in the terminal
* @n: the number of times the character _
* Return: none;
**/

void print_line(int n)
{
	int tint;

	for (tint = 0; tint < n; tint++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
