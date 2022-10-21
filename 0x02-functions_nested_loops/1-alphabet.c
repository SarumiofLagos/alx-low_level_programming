#include <stdio.h>
#include "main.h"

/**
 * main - print lower case
 *
 * Return: 0 (end)
 */

int main(void)
{

	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
