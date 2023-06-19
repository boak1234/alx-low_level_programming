#include <stdio.h>

/**
 * main - A program that print letters of alphabet
 * in lower cases and upper cases
 * Return: on (success)
 */

int main(void)
{
	int n;
	int m;

	n = 'a';
	m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
