#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description : This program that prints the
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
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);

}

return (0);
}
