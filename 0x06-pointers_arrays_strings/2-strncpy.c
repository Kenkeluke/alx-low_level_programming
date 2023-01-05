#include "main.h"

/**
 * _strncpy- entry point
 * Description: this function copies one string into another
 * @dest: destination to receive src string
 * @src: string to be coppied
 * @n: string length
 *Return: string character dest, destination string
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
long i;

for
(i = 0;
i < n && src[i] != '\0';
i++)
{
(dest[i]) = (src[i]);
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
