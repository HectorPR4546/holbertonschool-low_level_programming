#include "main.h"
/**
 * puts2 - entry point
 * @str: value
 * Return 0 (success)
 */
void puts2(char *str)
{
	int len;
	int num;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	for (num = 0; num <= len - 1; num += 2)
		_putchar(str[num]);
	_putchar('\n');
}
