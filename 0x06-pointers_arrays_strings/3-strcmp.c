#include "main.h"

/**
 * _strncpy- entry point
 * Description: this function compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *Return: string character dest, destination string
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
int result;
for
( ;
*s1 != '\0' && *s2 != '\0';
s1++)
{
if(*s1 == *s2)
{
result = 0;
}
else
{
result =(*s1 - *s2);
}


s2++;
}
return (result);
}
