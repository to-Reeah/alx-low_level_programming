#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: character
* Return: string
**/
void print_rev(char *s)
{
int i;
char c;

for (i = 0; s[i] != 0; i++)
{
}
for (i = i - 1; i >= 0; i--)
{
c = s[i];
_putchar(c);
}
_putchar('\n');
}
