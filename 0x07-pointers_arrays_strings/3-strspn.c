#include "main.h"

/**
 *_strspn- entry point
 *Description:This function gets the length of a prefi *x substring
 *@s: string
 *@accept: character to be be checked
 *
 *
 *Return: pointer to the charcter in the string;
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int num = 0;

i = 0;
while (*(s + i) != '\0')
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(accept + j) == *(s + i))
{
num += 1;

}
}
i++;
}
return (num);
}
