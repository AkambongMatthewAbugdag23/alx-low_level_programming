#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0 (SUCCESS)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of a int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return 0;
}
