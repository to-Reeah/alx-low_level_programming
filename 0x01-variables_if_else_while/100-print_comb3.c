#include <stdio.h>

/**
* main - prints combination of numbers to stdout.
*
* Return: 0
**/
int main(void)
{
int a = '0';
int c;

while (a <= '9')
{
c = a + 1;
while (c <= '9')
{
putchar(a);
putchar(c);
if (a == '8' && c == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
c++;
}
a++;
}
return (0);
}
