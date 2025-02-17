#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void);
{
	int h = 'a';
	int p = 'A';

	for (h = 'a'; h <= 'z'; h++)
	{
		putchar (h);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar (p);
	}
	putchar('\n');
	return (0);
}
