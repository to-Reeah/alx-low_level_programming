#include "main.h"

/**
* print_square - function thats prints a square
* @size: size of square
* Return: none
**/

void print_square(int size)
{
	int l, a;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
