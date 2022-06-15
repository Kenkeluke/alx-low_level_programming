#include "main.h"

/**
 *puts_half- entry point
 *Description :This function prints only half of a string
 *@str: string to print last half
 *
 *Return: void;
 *
 *
 */
void puts_half(char *str)
{
int index;
int half;
for (index = 0; str[index] != '\0'; index++)
{
index++;
}

if (index / 2 != 0)
{
for (half = (index - 1) / 2; half < index - 1; half++)
{
_putchar(str[half + 1]);
}
}
else
{
for (half = index / 2; half < index - 1; half++)
{
_putchar(str[half + 1]);
}

}
_putchar('\n');
}
