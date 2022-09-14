#include "main.h"
/**
 * print_last_digit - prints the value of the last digit of k
 * description: @k int type number
 * Return: value of last digit of k
 */
int print_last_digit(int k)
{
	k = k % 10;
	if (k < 0)
		k = -k;
	-putchar('0' + (k));
	return (k);
}
