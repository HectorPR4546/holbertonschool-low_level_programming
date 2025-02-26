#include "main.h"
/**
 * print_square - main entry
 * @size: variable
 * Return: 0 (succes)
 */
void print_square(int size)
{
	int line1, line2;

	if (size > 0)
	{
		for (line1 = 0; line1 < size; line1++)
		{
			for (line2 = 0; line2 < (size - 1); line2++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
