#include "main.h"

/**
 *power- this function mimics the standard c pow()
 *Description: This function raises a given base
 *to the power of an exponent
 *@a: base parameter
 *@b: parameter exponent
 * Return: integer
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
 * @s: String to counted
 * Return: integer
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

/**
*binary_to_uint - A function that convert a binary number to unsigned integer
*Description:
*@b: Binary number parameter
*Return: unsigned integer
*
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int decimal;
int n = length(b) - 1;

int i, e = 0;

	for (i = n; i >= 0; i--)
{
	if (b[i] != '0' && b[i] != '1')
{
	decimal = 0;
	break;
}
if (b[i] == '0')
decimal = decimal + 0;
if (b[i] == '1')
decimal = decimal + (1 * (power(2, e)));
e++;
}


return (decimal);

}



