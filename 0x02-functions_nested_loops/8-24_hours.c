#include "main.h"

/**
 *jack_bauer - entry point
 *Description :This function prints every minute in a day
 *
 *@void : no return value
 *
 *Return: null;
 *
 *
 */

void jack_bauer(void)
{
int h;
int i;
int j;
int k;
int min[1];
int hour[1];

for (h = 0; h <= 2; h++)
{
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 5; j++)
{
for (k = 0; k <= 9; k++)
{
hour[0] = h;
hour[1] = i;
_putchar(hour[0] + '0');
_putchar(hour[1] + '0');
_putchar(':');
min[0] = j;
min[1] = k;
_putchar(min[0] + '0');
_putchar(min[1] + '0');
_putchar('\n');
}
}
if (h == 2 && i == 3)
{
break;
}
else
{
continue;
}
}
}
}
