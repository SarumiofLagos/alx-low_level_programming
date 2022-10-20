#include <stdio.h>
#include <stdlib.h>

/**
 * main - print letters but q and e
 *
 * Return: 0
 */

int main(void)
{
	int noq_e;

	for (noq_e = 'a'; noq_e <= 'z'; noq_e++)
	{
		if (noq_e != 'q' && noq_e != 'e')
		{
			putchar(noq_e);
		}
	}
	putchar('\n');
	return (0);
}
