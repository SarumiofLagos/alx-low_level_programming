#include <stdio.h>
#include "main.h"

/**
 * main - print_alphabet
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
