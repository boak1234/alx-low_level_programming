#include <stdio.h>

/**
 * main - a program that prints alphanet
 * in lower case
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
