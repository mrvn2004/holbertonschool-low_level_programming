#include "main.h"

/**
 *swap_int: write a function that swaps the values of two integers.
 *@a: first integer pointer
 *@b: second integer pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
