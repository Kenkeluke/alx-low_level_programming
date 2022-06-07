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
for (a = 97; a < 123; a++)
{
putchar(a);
}
putchar('\n');

return (0);
}
