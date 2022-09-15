#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
				if (c < size + 1 - i)
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n');
		}
	}
}
