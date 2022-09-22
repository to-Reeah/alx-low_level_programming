#include "main.h"

/**
* *_strncat - concatenates two strings.
* @dest: string to be appended to src
* @src: string to be appended to dest
* @n: number of bytes from src
* Return: address of dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	if (n <= 0)
	{
		return (dest);
	}

	c = 0;
	d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (d < n && src[d] != '\0')
	{
		dest[c++] = src[d++];
	}
	dest[c++] = '\0';
	return (dest);
}
