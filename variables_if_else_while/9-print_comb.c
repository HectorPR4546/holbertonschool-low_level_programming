#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int h;
	int p;
	int v;

	for (h = '0'; h <= '9'; h++)
	{
		putchar (h);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar (p);
	}
	for (v = ', '; v++)
	{
		putchar (v);
	}
	putchar('\n');
	return (0);
}
