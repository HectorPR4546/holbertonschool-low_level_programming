#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		print_alphabet_x10();
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
