#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c = '0';

	for (c = '0'; c <= '9'; c++)
	{
	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (b < a && c < b)
			{
				putchar(c);
				putchar(b);
				putchar(a);
			}
			if (c == '7' && b == '8' && a == '9')
			{
				break;
			}
			if (b < a && c < b)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
