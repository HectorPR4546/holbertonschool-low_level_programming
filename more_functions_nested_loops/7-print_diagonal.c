#include "main.h"
/**
 * print_diagonal - entry point
 * @n: variable
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int h, p;

	h = 0;

	while (n > 0)
	{
		p = h;
		while (p > 0)
		{
			_putchar(' ');
			p--;
		}
		_putchar('\\');
		_putchar('\n');
		h++;
		n--;
	}
	if (h < 1)
		_putchar('\n');
}
