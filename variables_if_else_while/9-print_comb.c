#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int h = '0';

	while (h <= '9')
	{
		putchar (h);
		if (h <= '8')
		{
			putchar (',');
			putchar (' ');
		}
		h++;
	}
	putchar('\n');
	return (0);
}
