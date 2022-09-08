#include <stdio.h>
/**
 * main - main block
 * return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int LngInt;
	long long int lngLngInt;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(LngInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lngLngInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
