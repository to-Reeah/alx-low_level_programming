#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, o, p = 0, key = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (o = 0; av[m][o]; o++)
			key++;
	}
	key += ac;

	str = malloc(sizeof(char) * key + 1);
	if (str == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (o = 0; av[m][o]; o++)
		{
			str[p] = av[m][o];
			p++;
		}
		if (str[p] == '\0')
		{
			str[p++] = '\n';
		}
	}
	return (str);
}
