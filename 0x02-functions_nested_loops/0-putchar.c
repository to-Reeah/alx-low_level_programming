#include "main.h"
/**
 * main - print "_putchar", followed by a new line.
 * Return: 0
 */
int main(void)
{
	char mikayla[] = "_putchar";
	int i = 0;

	while (mikayla[i] != '\0')
	{
		_putchar(mikayla[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
