#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: a pointer to char
 * Return: length of a string
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
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer to string
 */

void puts_half(char *str)
{
	int i;
	int size = _strlen(str);

	if (size % 2 != 0)
		i = (size / 2) + 1;
	else
		i = (size / 2);

	while (i < size)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
