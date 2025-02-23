#include "main.h"
/**
 * print_last_digit- main entry
 * @a: variable
 * Return: 0 (success)
 */
int print_last_digit(int a)
{
	int h;

	h = a % 10;

	if (h < 0)
	{
		h = h * -1;
	}
	_putchar(h + '0');
	return (h);
}
