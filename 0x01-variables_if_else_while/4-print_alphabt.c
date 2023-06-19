#include <stdio.h>

/**
 * main - A program that prints alphabet
 * in lower cases
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if (n == 'q' || n == 'e')
		n++;
		putchar(n);
	}
	putchar(10);
	return (0);
}
