#include "holberton.h"
/**
 * void print_to_98 - check the code
 *@n: letter that we use
 *Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
		printf("%d", n);

		if (n < 98)
			printf(", ");
		if (n == 98)
			printf("\n");
		n++;
		}
/*		if (n == 98)
		printf("\n");
*/	}


	if (n >= 98)
	{
		while (n > 99)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			if (n == 98)
				printf("\n");
			n--;
		}
/*		if (n == 98)
		printf("\n");
*/	}
}
