#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to char
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * puts2 - prints one character out of 2 of a string
 * @str: a pointer to string
 * Return: nothing
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
