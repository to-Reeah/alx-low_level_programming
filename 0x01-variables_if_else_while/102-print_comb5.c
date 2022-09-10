#include <stdio.h>

/**
* main - Prints series of numbers to stdout.
*
* Return: 0
**/
int main(void)
{
int v = 0;
int i;

while (v <= 98)
{
i = v + 1;
while (i <= 99)
{
putchar(v / 10 % 10 + '0');
putchar(v % 10 + '0');
putchar(' ');
putchar(i / 10 % 10 + '0');
putchar(i % 10 + '0');
if (v == 98 && i == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
i++;
}
v++;
}
return (0);
}
