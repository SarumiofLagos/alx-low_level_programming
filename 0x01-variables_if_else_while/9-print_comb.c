#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combo
 *
 * Return: 0 (end)
 */

int main(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (n == '9')
		{
			putchar('\n');
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
