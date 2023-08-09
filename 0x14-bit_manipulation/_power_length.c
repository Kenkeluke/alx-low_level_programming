#include "main.h"

/**
 *power- this function mimics the standard c pow()
 *Description: This function raises a given base
 *to the power of an exponent
 *@a: base parameter
 *@b: parameter exponent
 *Return: integer
 */

int power(int a, int b)
{
int result = 1;
while (b > 0)
{
result = result *a;
b--;

}
return (result);
}

/**
 *length- this function mimics the standard c string_lens
 *Description: This function counts the number
 *of character in a string
 *@s: String to counted
 *Return: integer
 */

int length(const char *s)
{
int result = 0;
while (*s != '\0')
{
result++;
s = s + 1;

}
return (result);
}
