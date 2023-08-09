#include "main.h"

/**
 *print_rev- entry point
 *Description :This function prints a string in reverse
 *@s: string to be printed
 *
 *Return: void;
 *
 *
 */

void print_rev(char *s)
{
int index, revindex;
for (index = 0; s[index] != '\0'; index++)
{
index++;
}
for (revindex = index - 1; revindex >= 0; revindex--)
{
_putchar(s[revindex]);
}
_putchar('\n');
}
