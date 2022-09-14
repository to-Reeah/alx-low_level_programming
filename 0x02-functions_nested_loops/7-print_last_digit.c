#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * description: @n int type number
 * Return: return value of last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	-putchar('0' + (n));
	return (n);
}
