#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: this funtion multiplies two number arg * uments passed to the
 *command line
 * arguments passed to the command line
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments type into the
 * command line
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i;
if (argc != 3)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
return (0);
}
