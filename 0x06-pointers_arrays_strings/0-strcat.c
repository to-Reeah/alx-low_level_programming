#include "main.h"

/**
* *_strcat - a function that concatenates two strings
* @dest: string
* @src: string
* Return: address of dest
**/

char *_strcat(char *dest, char *src)
{
	int m;
	int k;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[m + k] = src[k];
	}
	return (dest);
}
