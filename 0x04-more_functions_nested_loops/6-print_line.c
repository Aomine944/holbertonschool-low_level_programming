#include "holberton.h"
/**
 * print_line - check its an uppercase or not
 *
 *@n: letter that we use
 *Return: always 0
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
