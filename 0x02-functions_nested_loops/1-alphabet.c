#include "main.h"

/**
 * main - A function that prints the alphabet
 * in lower case
 * Return: 0 (success)
 */

void print_alphabet(void);
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
