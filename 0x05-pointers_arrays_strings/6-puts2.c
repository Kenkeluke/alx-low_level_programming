#include "main.h"

/**
 *puts2- entry point
 *Description :This function prints every other character in a string
 *@str: string to be printed
 *
 *Return: void;
 *
 *
 */
void puts2(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
if (index == 0 || index % 2 == 0)
{
_putchar(str[index]);
}
else
continue;
}
_putchar('\n');
}
