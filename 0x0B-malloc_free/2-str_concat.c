#include <stdlib.h>
#include "main.h"

/**
* str_concat - function that concatenates two strings
* @s1: holds the first string
* @s2: holds the second string
* Return: pointer to a string
**/

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int v;
	int k;

	i = 0;
	v = 0;
	k = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i += 1;
	while (s2[j])
		v += 1;
	a = malloc((i + v) * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	while (*s1)
	{
		a[k] = *s1++;
		k += 1;
	}
	while (*s2)
	{
		a[k] = *s2++;
		k += 1;
	}
	return (a);
}
