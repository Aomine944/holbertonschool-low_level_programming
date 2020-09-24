#include "holberton.h"
/**
 * print_square - check its an uppercase or not
 *
 *@size: letter that we use
 *Return: always 0
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
