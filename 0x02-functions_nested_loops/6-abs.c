#include "main.h"
/**
 * _abs - show the absolute value of an integer
 * @n: integer value to be tested
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n - 2 * n);
}
