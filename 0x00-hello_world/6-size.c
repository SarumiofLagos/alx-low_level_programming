#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print the size of each type
 *Return - Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("size of an int: %zu byte(s)\n", (int)sizeof(int));
	printf("size of a long int: %zu byte(s)\n", (int)sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", (int)sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", (int)sizeof(float));
	return (0);
}
