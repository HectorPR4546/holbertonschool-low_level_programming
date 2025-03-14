#include "main.h"
#include <math.h>
/**
 * _pow_recursion - entry point
 * @x: variable
 * @y: variable
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
