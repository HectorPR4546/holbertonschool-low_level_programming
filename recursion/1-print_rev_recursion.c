#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - entry point
 * @s: variable
 * Return: 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
