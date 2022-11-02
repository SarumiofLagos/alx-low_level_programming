#include "main.h"

/**
 * factorial - print factorial of a given number
 * @n: number to find its factorial
 *
 * Return: if n > 0 - the factorial of n.
 * if n < 0 - 1 to point out error.
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
