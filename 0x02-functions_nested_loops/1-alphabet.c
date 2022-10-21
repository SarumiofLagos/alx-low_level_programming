#include <stdio.h>
#include "main.h"

/**
 * main - print lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
