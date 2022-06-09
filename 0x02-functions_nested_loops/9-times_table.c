#include "main.h"
/**
 *times_table - entry point
 *Description :This function prints 9times multiplication table
 *
 *@void : no return value
 *
 *Return: null;
 */
void times_table(void)
{
int h, i, sum, last, first;
for (h = 0; h <= 9; h++)
{
for (i = 0; i <= 9; i++)
{
sum = h * i;
last = sum % 10;
first = sum / 10;

if (sum < 10)
{
_putchar(' ');
_putchar(sum + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
else if (h == 0)
_putchar(' ');
else
_putchar(' ');
}
else
{
_putchar(first + '0');
_putchar(last + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
else if (h == 0)
_putchar(' ');
else
_putchar(' ');
}
}
_putchar('\n');
}
}
