#include "main.h"
/**
 * more_numbers - entry point
 * Return: void (success)
 */
void more_numbers(void)
{

	int h = 0;
	int p = 0;

	while (p <= 9)
	{
		while (h <= 14)
		{
			if (h > 9)
				_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			h++;

		}
	_putchar('\n');
	p++;
	h = 0;
	}
}
