#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Prints alphabets in reverse
 *
 *Return: always 0(success)
 */
int main(void)
{
char a;
for (a = 122; a > 96; a--)
{
putchar(a);
}
putchar('\n');

return (0);
}
