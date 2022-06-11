#include "main.h"
/**
 *print_diagonal - entry point
 *
 *Description : This function prints diagonal
 *lines
 *
 *
 *
 * @n: argument that determines line length
 *
 * Return : void
 */


void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{

for (j = 0; j < i; j++)
{
_putchar(' ');

}
_putchar('\\');
_putchar('\n');
}

}
}
