#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu\n byte(s)", sizeof(a));
	printf("Size of a int: %lu\n byte(s)", sizeof(b));
	printf("Size of a long int: %lu\n byte(s)", sizeof(c));
	printf("Size of long long int: %lu\n  byte(s)", sizeof(d));
	printf("Size of a float: %lu\n byte(s)", sizeof(e));
	return (0);
}

