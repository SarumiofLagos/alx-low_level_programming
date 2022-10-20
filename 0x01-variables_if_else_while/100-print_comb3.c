#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combo of 2 digits
 *
 * Return: 0 (end)
 */

int main(void)
{

	int a = '3';
	int x = '5';

	while (a = '3', a <=,'8')
	{
		while (x = '5', x <= '9')
		{
			while (a != x)
			{
				putchar(a);
				putchar(b);
				if (a <= '8')
				{
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			x = a + 1;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
