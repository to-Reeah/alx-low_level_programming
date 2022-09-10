#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Describes the last digit and send message to stdout.
 * Return: 0 on success.
*/

int main(void)
{
	int n;
	int kay;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	kay = n % 10;

	if (kay > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, kay);

	if (kay == 0)
	printf("Last digit of %d is %d and is 0\n", n, kay);

	if (kay < 6 && kay != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, kay);

	return (0);
}
