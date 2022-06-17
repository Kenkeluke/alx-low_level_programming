#include "main.h"

/**
 * _strncat- entry point
 * Description: this function concatenates two strings using n bytes
 * @dest: destination string
 * @src: string to be appended
 * @n: the number of bytes to add to the first string
 *Return: char dest, destination string
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b = 0;
for
(a = 0;
dest[a];
a++);
while (*(src + b))
{
for (; b < n; b++)
{
*(dest + a) = *(src + b);
}
b++;
}
return (dest);
}
