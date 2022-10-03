#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* * @str: holds the string
* Return: a pointer
**/

char *_strdup(char *str)
{
	char *p;
	int i;
	int v;

	v = 0;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i += 1;
	p = malloc(i * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	while (*str)
	{
		p[v] = *str;
		str++;
		v += 1;
	}
	p[v] = *str;
		return (p);
}
