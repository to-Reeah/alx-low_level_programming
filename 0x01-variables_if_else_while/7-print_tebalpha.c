#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
**/
int main(void)
{
	char u;

	for (u = 'z' ; u >= 'a'; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
