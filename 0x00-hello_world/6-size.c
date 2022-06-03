#include <stdio.h>
/**
 *main- Entry point
 *
 *Description: This program prints the size of different size
 *
 *Return: Always 0(success)
 */
int main(void)
{
char c;
int i;
long l;
long long d;
float f;
printf("Size of a char: %d\n byte(s)", (int) (sizeof(c)));
printf("Size of an int: %d\n byte(s)", (int) (sizeof(i)));
printf("Size of a long int: %d\n byte(s)", (int) (sizeof(l)));
printf("Size of a long long int: %d\n byte(s)", (int) (sizeof(d)));
printf("Size of a float: %d\n byte(s)", (int) (sizeof(f)));
return (0);
}
