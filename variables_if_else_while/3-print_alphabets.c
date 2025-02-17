#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void);
{
	int h = 'a';
	int p = 'A';

	while (h <= 'z')
	{
		putchar (h);
		h++;
	}
	while (p <= 'Z')
	{
		putchar (p);
		p++;
	}
	putchar('\n');
	return (0);
}
