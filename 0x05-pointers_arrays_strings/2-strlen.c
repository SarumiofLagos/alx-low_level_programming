#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)

{

	size_t len = 0;

	while (*str++)
		len++;

	return (len);

}
