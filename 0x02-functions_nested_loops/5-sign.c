#include "main.h"

/**
 * print_sign - entry point
 * Description :This function prints the sign of a number
 *
 *@n : represents integer parameter
 *
 *Return: 0, always success
 *
 *
 */

int print_sign(int n)
{
int result;
if (n > 0)
{
result = 1;
_putchar(43);
}
else if (n == 0)
{
result = 0;
_putchar(48);
}
else
{
result = -1;
_putchar(45);
}
return (result);
}
