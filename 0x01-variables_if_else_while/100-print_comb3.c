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
int a, b;
for(a = 48; a < 57; a++)
{

   for( b = 49; b < 58; b++)
   {
        if( !(a == 50 && b == 49)  && !(a == 51 && (b == 49 || b == 50))
	&& !(a == 52 && (b == 49 || b == 50 || b == 51)) 
	&& !(a == 53 && (b == 49 || b == 50 || b == 51 || b == 52))
	&& !(a == 53 && (b == 49 || b == 50 || b == 51 || b == 52))
	&& !(a == 54 && (b == 49 || b == 50 || b == 51 || b == 52 || b == 53))
	&& !(a == 55 && (b == 49 || b == 50 || b == 51 || b == 52 || b == 53 || b == 54))
	&& !(a == 56 && (b == 49 || b == 50 || b == 51 || b == 52 || b == 53 || b == 54 || b == 55))
	&& !(a == 57 && (b == 49 || b == 50 || b == 51 || b == 52 || b == 53 || b == 54 || b == 55 || b == 56)))
        
	{
	putchar(' ');
	putchar(a);
	putchar(b);
	if(b != 57)
	putchar(',');
	
	}
   }


}
putchar('\n');
return (0);
}