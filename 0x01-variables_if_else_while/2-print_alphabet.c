#include <stdio.h>
#include <stdlib.h>

/**
 * main - small letters
 *
 * Return: 0 (end)
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n')
	return (0);
}
