#include <stdio.h>
#include <stdlib.h>

/**
* main - print product of argument numbers
* @argc: size of argv
* @argv: array
* Return: 0 on success, 1 if two arguments are not given
**/

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
