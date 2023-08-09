#include "main.h"

/**
 *_strlen- entry point
 *Description :This function swaps the value of *two ints
 *@s : pointer value in the string
 *
 *Return: int;
 *
 *
 */

int _strlen(char *s)
{
int length;
for (length = 0; *s != '\0'; s++)
{
length++;
}
return (length);
}
