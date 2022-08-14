#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Prints combination of single digits followed by comma
 *
 *Return: always 0(success)
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);

if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
