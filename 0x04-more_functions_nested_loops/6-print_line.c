#include "main.h"
/**
 * print_line - entry point
 *
 * Description : This function prints blank
 *lines
 *
 *
 *
 *@n: argument that determines line length
 *
 * Return : void
 */


void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (!(n <= 0))
{
_putchar('_');
}
}
_putchar('\n');
}
