#include <stdio.h>

/**
 * main - A program that  prints the size of various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)
	sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)
	sizeof(b));
	printf("sze of a long int: %lu byte(s)\n", (unsigned long)
	sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)
	sizeof(f));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)
	sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)
	sizeof(f));
	return (0);
}
