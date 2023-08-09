#include "main.h"

/**
 *_isupper - entry point
 *Description :This function checks if the argument is *uppercase and returns 1
 *if the argument is uppercase
 *
 *@c : argument to be checked
 *
 *Return: 0;
 *
 *
 */

int _isupper(int c)
{
int result;
if (c >= 65 && c <= 90)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
