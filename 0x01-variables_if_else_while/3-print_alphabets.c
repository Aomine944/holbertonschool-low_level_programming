#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 97;
for (a = 97; a <= 122; a++)
{
putchar((char)a);
}
for (a = 65; a <= 90; a++)
{
putchar((char)a);
}
putchar('\n');
return (0);
}
