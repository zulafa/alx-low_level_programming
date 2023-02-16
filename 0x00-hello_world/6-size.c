#include <stdio.h>
/**
 * main - A program that prints the size of various comp
 uter various types
 * Return 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
        printf("Size of an int: %zu byte(s)\n", sizeof(int));
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
        printf("Size of a long long long: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}

