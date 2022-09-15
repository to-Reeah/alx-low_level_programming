include "main.h"
/**
 * _isupper - print a function that checks uppercase character
 * @c: is it char?
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
