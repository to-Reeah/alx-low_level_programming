#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a random password generator for 101-crackme
 * Description: my key gen.
 * Return: 0.
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j += i;
		k++;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
