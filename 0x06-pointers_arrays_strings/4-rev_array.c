#include "main.h"

/**
 * _strncpy- entry point
 * Description: this function rverses the content of an array of integer
 * @a: array to be reversed
 * @n: number of elements in the array
 *Return: void
 *
 */
void reverse_array(int *a, int n)
{
int b;
int rev[40];

for (b = 0; b < n ; b++)
{
rev[n - 1 - b] = a[b];
}

for (b = 0 ; b < n ; b++)
{
a[b] = rev[b];
}
}
