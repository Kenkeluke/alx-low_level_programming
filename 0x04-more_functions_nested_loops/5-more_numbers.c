#include "main.h"
/**
 *more_numbers - entry point
 *
 *Description : This function prints 10 lines of 1-14
 *
 *
 *
 *@void: no return
 *
 * Return : void
 */


void more_numbers(void)
{
int a, b, i;

for (a = 0; a < 10; a++)
{
for (i = 0; i < 15; i++)
{
b = i;

if (i > 9)
{
b = i % 10;
_putchar(1 + '0');
}
_putchar(b + '0');
}
_putchar('\n');
}
}
