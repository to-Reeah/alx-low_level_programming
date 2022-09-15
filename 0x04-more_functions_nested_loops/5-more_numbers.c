#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 10 times the numbers, from 0 to 14, followed by a new line
 *
 */
void more_numbers(void)
{
	int u, g;

	for (u = 0; u < 10; u++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g > 9)
				_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
