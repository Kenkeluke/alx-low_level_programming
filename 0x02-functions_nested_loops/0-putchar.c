#include "main.h"

/**
 *main - entry point
 *
 *Description: This program prints _putchar using the
 *_putchar function
 *
 *
 *Return: 0 always success
 *
 *
 */

int main(void)
{
char charArray[] = "_putchar";
int lengthOfCharArray = sizeof(charArray) / sizeof(charArray[0]);
int a;
for (a = 0; a < lengthOfCharArray - 1; a++)
{
_putchar(charArray[a]);
}
_putchar('\n');
return (0);
}
