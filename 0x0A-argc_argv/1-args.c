#include <stdio.h>
#include <stdlib.h>

/**
* main - print a number, followed by a new line.
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
