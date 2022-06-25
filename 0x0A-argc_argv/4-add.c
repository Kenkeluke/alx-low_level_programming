#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *description: This function prints the sum of numbers passed as arguments
 *@argc: number of arguments
 *@argv: string of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{


for (j = 0; argv[i][j] != '\0'; j++)
{
if ((argv[i][j] < '0' || argv[i][j] > '9'))
{
printf("Error\n");
return (1);
}

}
sum += atoi(argv[i]);

}

printf("%d\n", sum);
return (0);
}
