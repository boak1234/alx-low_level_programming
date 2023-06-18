#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function of program
 * Return: 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("last digit of %d is  %d and is greater than 5\n", 5, n);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", 5, n);
	}
	else
	{
		printf("lsat digit of %d is %d and is less than 6 and not 0\n", 5, n);
	}
	return (0);
}
