#include "main.h"

/**
 * print_number - checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
<<<<<<< HEAD
	int i, d, p, f;
	int v;
	char num[1000];
=======
	unsigned int z;
	int m, a;
>>>>>>> 02f4879befaee9c324521caa68f89e7cfec064bb

	a = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		z = n;
	while (z / a > 9)
	{
		a = a * 10;
	}
	while (a > 0)
	{
		m = z / a;
		z = z % a;
		_putchar (m + '0');
		a = a / 10;
	}
	}
}
