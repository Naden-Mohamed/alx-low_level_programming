#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*
*/

int main(void)
{
int d, p;
for (d = '0'; d < '89'; d++)
{
for (p = d + 1; p <= '99'; p++)
{
if (p != d)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (d == 89 && p == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
