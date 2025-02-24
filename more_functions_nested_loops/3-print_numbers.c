#include "main.h"
/**
 * print_numbers - entry point
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= '9')
	{
		_putchar (a);
		a++;
	}
	_putchar('\n');
}
