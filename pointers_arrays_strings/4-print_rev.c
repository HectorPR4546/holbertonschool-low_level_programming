#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - entry point
 * @s: variable
 * Return: 0 (successs)
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
