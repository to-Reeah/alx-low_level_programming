#include "main.h"
/**
 * swap_int - print a function that swaps the value of two integers
 * @a: takes an int
 * @b: takes an int
 * Return: value
 */

void swap_int(int *a, int *b)
{
	int v = *a;

	*a = *b;
	*b = *v;
}
