#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Thid rogram prints alphabets in lowercase except p and e
*
*Return: always 0(success)
*/
int main(void)
{
char a;
for (a = 97; a < 123; a++)
{
if (a == 101 || a == 113)
{
continue;
}
putchar(a);
}
putchar('\n');

return (0);
}
