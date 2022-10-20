#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hexadecimal
 *
 * Return: 0 (end)
 */

int main(void)
{

	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
