#include "main.h"

/**
 *_memset- entry point
 *Description: This function sets the
 *value of elements in a string to a charcter
 *@s: pointer value in the string
 *@b: Character to set
 *@n: number of indices to set
 *
 *Return: char;
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}
