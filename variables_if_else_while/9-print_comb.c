#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar (h + '0');
		if (h < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
