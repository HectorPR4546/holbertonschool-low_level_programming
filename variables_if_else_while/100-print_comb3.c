#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int h = '01';

	while (h <= '89')
	{
		putchar (h);
		if (h <= '88')
		{
			putchar (',');
			putchar (' ');
		}
		h++;
	}
	putchar('\n');
	return (0);
}
