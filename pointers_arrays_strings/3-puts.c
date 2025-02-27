#include "main.h"
#include <string.h>
/**
 * _puts - entry point
 * @str: variable
 * Return: 0 (success)
 */
void _puts(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
