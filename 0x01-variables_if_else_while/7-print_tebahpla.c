#include <stdio.h>
#include <stdlib.h>

/**
 * main - print reverse small letters
 *
 * Return: 0 (end)
 */

int main(void)
{

	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
