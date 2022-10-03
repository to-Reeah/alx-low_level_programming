#include <stdlib.h>
#include "main.h"

/**
* create_array - a function that creates an array of chars/
* and initializes it with a specific char
* @size: unsigned integer
* @c: char
* Return: a pointer to the array, or null
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
