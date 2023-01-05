#include "main.h"

/**
 *print_last_digit - entry point
 *Description :This function prints the last digit of an integer
 *
 *@n : represents integer parameter
 *
 *Return: 0, always success
 *
 *
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (n < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0');

return (last_digit);
}
