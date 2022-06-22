#include "main.h"

/**
 *_strchr- entry point
 *Description:This function checks if a string contain *s a character
 *and returns a pointer
 *@s: string
 *@c: character to be be checked
 *
 *
 *Return: pointer to the charcter in the string;
 *
 *
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
{
return ((s + i));
}
}
if (*s == c)
return (s);
else
return ('\0');
}
