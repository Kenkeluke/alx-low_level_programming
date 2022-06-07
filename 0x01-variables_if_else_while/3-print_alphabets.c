#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Thid rogram prints alphabets in lowercase
*
*Return: always 0(success)
*/
int main(void)
{
char a;
char b;
for (a = 97; a < 123; a++)
{
putchar(a);
}
for (b = 65; b < 91; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
