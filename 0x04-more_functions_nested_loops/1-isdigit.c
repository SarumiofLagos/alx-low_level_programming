#include "main.h"
#include <stdio.h>

/**
 * _isdigit(int c) - 
 * @c: input
 * Return: return 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{

	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
