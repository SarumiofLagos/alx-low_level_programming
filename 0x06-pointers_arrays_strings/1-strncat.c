#include "main.h"

/**
 * _strncat - concatenate two string using an inputed number of bytes
 * @dest: string to be concatenated on
 * @src: string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
