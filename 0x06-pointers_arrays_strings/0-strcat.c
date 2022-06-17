#include "main.h"

/**
 * _strcat- entry point
 * Description: this function concatenates two strings
 * @dest: destination string
 * @src: string to be appended
 *Return: char dest
 *
 *
 */
char *_strcat(char *dest, char *src)
{
int a;
int b = 0;
for
(a = 0;
dest[a];
a++);
while (*(src + b))
{
*(dest + a) = *(src + b);
b++;
a++;
}
return (dest);
}
