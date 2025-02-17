#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char h = '0';
	char p = 'a'

	while (h <= '9')
	{
		putchar(h);
		h++;
	}
	while (p <= 'f')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
