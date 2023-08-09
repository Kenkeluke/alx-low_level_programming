#include "main.h"

/**
 *_strpbrk- entry point
 *Description:This function checks if a string contain *s a character
 *and returns a pointer
 * @s: string
 * @accept: string to be be checked
 *
 *
 *Return: pointer to the charcter in the string;
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(accept + j) ==  *(s + i))
{
return (s + i);
}
}
}
if (*(accept + j) ==  *(s + i))
return (s + i);
else
return ('\0');
}
