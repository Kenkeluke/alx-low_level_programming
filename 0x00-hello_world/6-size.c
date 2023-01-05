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
printf("Size of a char: %d byte(s)\n", (int) (sizeof(c)));
printf("Size of an int: %d byte(s)\n", (int) (sizeof(i)));
printf("Size of a long int: %d byte(s)\n", (int) (sizeof(l)));
printf("Size of a long long int: %d byte(s)\n", (int) (sizeof(d)));
printf("Size of a float: %d byte(s)\n", (int) (sizeof(f)));
return (0);
}
