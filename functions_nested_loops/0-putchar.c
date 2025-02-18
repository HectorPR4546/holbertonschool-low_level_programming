#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char *i = "_putchar\n";

	while (*i)
	{
		putchar(*i++);
	}
	return (0);
}
