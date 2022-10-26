#include "main.h"

/**
 * _strcat - concatenate string src and the string dest
 * @dest: pointer to the string to be concatenated on
 * @src: the source string to be appended to dest
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
