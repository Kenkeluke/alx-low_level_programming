#include "main.h"

/**
 *swap_int- entry point
 *Description :This function swaps the value of *two ints
 *@a : parameter to be swapped
 *@b : parameter to be swapped
 *
 *Return: void;
 *
 *
 */

void swap_int(int *a, int *b)
{
int criscross;
criscross = *a;
*a = *b;
*b = criscross;
}
