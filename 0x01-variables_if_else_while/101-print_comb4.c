#include <stdio.h>

/**
* main - Determine the combination of three numbers
*
* Return: 0
**/
int main(void)
{
int a = '0';
int b;
int c;

while (a <= '7')
{
b = a + 1;
while (b <= '8')
{
c = b + 1;
while (c <= '9')
{
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8' && c == '9')
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
b++;
}
a++;
}
return (0);
}
