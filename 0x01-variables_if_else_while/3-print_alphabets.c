#include <stdio.h>
#include <stdlib.h>

/**
 * main - print small and capital letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	char small_a = 'a';
	char small_z = 'z';
	char Big_A = 'A';
	char Big_Z = 'Z';

	for (; small_a <= small_z; small_a++)
	{
		putchar(small_a);
	}
	for (; Big_A <= Big_Z; Big_A++)
	{
		putchar(Big_A);
	}
	putchar('\n');
	return (0)
}
