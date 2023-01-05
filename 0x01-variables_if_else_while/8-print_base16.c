#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Prints digits of hexadecimal
 *
 *Return: always 0(success)
 */
int main(void)
{
int a;
char b;
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (b = 97; b < 103; b++)
{
putchar(b);
}
putchar('\n');

return (0);
}
