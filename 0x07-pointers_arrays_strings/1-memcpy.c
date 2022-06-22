#include "main.h"

/**
 *_memcpy- entry point
 *Description:This function copies the value of elemen *ts in a source string
 *to a destination string
 *@dest: destination string
 *@src: source string
 *@n: number of indices to copy
 *
 *Return: pointer to dest;
 *
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;


for (i = 0; i < n; i++)
{

*(dest + i) = *(src + i);
}
return (dest);

}
