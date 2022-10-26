#include "main.h"

/**
 * _strncpy - copies inputed number of bytes from src to dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the number of bytes to be copied from src
 *
 * Return: Pointer to the resulting dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
