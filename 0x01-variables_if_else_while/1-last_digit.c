#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- entry point
*
*Description:The program prints random number
*
*Return: always 0(success)
*/
int main(void)
{
int n;
int l = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (l > 5)
printf("Last digit of %d is %d and is greater than 5\n");
if (l < 6 && l != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n");
if (l == 0)
printf("Last digit of %d is 0\n");

return (0);
}
