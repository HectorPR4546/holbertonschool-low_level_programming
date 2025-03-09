#include "main.h"
/**
 * factorial - main entry
 * @n: variable
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}

