#include "holberton.h"
/**
 * print_diagonal - check its an uppercase or not
 *
 *@n: letter that we use
 *Return: always 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
