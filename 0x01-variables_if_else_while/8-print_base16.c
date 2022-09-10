#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0 on success
**/
int main(void)
{
int alpha;
char omega;

for (alpha = 0; alpha < 10; alpha++)
putchar(alpha + '0');
for (omega = 'a'; omega <= 'f'; omega++)
putchar(omega);
putchar('\n');
return (0);
}
