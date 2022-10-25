#include "main.h"

/**
 * print_array - n elements of an arrays
 * @a: the array of integers
 * @n: the number elements of array
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
