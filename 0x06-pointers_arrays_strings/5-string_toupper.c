#include "main.h"

/**
 * _strncpy- entry point
 * Description: this function changes owercase to uppercase
 * @str*: array to be reversed
 *
 *
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a'  && str[i] <= 'z')
str[i] -= 32;
}
return (str);
}
