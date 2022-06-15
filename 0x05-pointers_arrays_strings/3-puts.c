#include "main.h"

/**
 *_puts- entry point
 *Description :This function prints a string to the stdout
 *@str: string to be printed
 *
 *Return: void;
 *
 *
 */

void _puts(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
