#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - last digit of n
 *
 * Return: 0 (end)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 4;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	} else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	} else if (a < 6 && a != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	return (0);
}
