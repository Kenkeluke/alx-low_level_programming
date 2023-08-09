#include <stdio.h>
/**
 *main- entry point
 *
 *Description : Prints combination of two digits followed by comma
 *
 *Return: always 0(success)
 */
int main(void)
{
int a, b, c;
for (a = 48; a < 57; a++)
{

for (b = 49; b < 58; b++)
{
    for (c = 50; c < 59; c++)
        {
            	if (!(a == 49 && (b == 49))
	&& !(a == 50 && (b == 49 || b == 50))
	&& !(a == 51 && (b == 48 || b == 49 || b == 50 || b == 51))
	&& !(a == 52 && (b == 48 || b == 49 || b == 50 || b == 51 || b == 52))
	&& !(a == 53 && (b == 48 || b == 49 || b == 50 || b == 51
	 || b == 52 || b == 53))
	&& !(a == 54 && (b == 48 || b == 49 || b == 50 || b == 51
	 || b == 52 || b == 53 || b == 54))
	&& !(a == 55 && (b == 48 || b == 49 || b == 50 || b == 51
	 || b == 52 || b == 53 || b == 54 || b == 55))
	&& !(a == 56 && (b == 48 || b == 49 || b == 50 || b == 51
	 || b == 52 || b == 53 || b == 54 || b == 55 || b == 56))
	&& !(a == 57 && (b == 48 || b == 49 || b == 50 || b == 51
	 || b == 52 || b == 53 || b == 54 || b == 55 || b == 56 || b == 57)))

	{
	putchar(a);
	putchar(b);
    putchar(c);

	if (!(a == 56 && b == 57))
	{
		putchar(',');
		putchar(' ');
	}

	}
        }

	}


}
putchar('\n');
return (0);
}
