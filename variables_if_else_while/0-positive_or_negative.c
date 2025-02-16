#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry poiny
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n");
	}
	else if (n < 0)
	{
		printf("%u is negative\n");
	}
	else
	{
		printf("%u is zero\n");
	}
	return (0);
}
