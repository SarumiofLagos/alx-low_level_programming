#include <stdio.h>
#include "main.h"

/**
 * swap_int - the function that swaps the values of 2 integers
 * @a: first hint to swap
 * @b: next int to swap
 * Return: 0 (end)
 */

void swap_int(int *a, int *b)

{

	int c;

	c = *a;
	*a = *b;
	*b = c;

}
