#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 * @n: input
 * Return: 0 (end)
 */

int _strlen(char *str)

{

	size_t len = 0;

	while (*str++)
		len++;

	return (len);

}
