#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * Return: none
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			c = size - l - 1;
			if (b < c)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
