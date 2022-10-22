#include "main.h"
#include <stdio.h>

/**
 * _isdigit(int c) - program that checks digit
 * @c: input
 * Return: return 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
