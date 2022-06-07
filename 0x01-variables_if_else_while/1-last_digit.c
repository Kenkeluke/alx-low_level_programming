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
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, l);
if (l < 6 && l != 0)
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, l);
if (l == 0)
printf("Last digit of %d is 0 \n");

return (0);
}
