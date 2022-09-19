#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: char
* Return: string
**/
void rev_string(char *s)
{
int i = 0;
int l;
char c;
char k;

while (s[i] != '\0')
{
i++;
}
i--;
for (l = 0; l < i; l++)
{
c = s[k];
k = s[i];
s[l] = k;
s[i] = c;
i--;
}
}
