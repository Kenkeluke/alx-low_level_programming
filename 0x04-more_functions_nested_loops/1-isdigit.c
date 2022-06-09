#include "main.h"

/**
 *_isdigit - entry point
 *Description :This function checks if the argument is *a digit and returns 1
 * if the argument is a digit
 *
 *@c : argument to be checked
 *
 *Return: 0;
 *
 *
 */

int _isdigit(int c)
{
int result;
if (c >= 48 && c <= 57)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
