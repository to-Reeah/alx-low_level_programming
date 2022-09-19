#include "main.h"
/**
 * swap_int - print a function that swaps the value of two integers
 * @a: takes an int
 * @b: takes an int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = *i;
}
