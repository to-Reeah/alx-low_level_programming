#include <stdio.h>

/**
 * main - Prints the numbers from 0-9.
 * Return: 0 on success.
*/

int main(void)
{
	int nums;

	nums = 0;
	while (nums < 10)
	{
		printf("%d", nums);
		nums++;
	}
	putchar('\n');

	return (0);
}
