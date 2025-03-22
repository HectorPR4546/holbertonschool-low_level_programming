#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum a & b
 * @a: integer 1
 * @b: integer 2
 * Return: sum a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a & b
 * @a: integer 1
 * @b: integer 2
 * Return: subtract a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication a & b
 * @a: integer 1
 * @b: integer 2
 * Return: mult a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divison a & b
 * @a: integer 1
 * @b: integer 2
 * Return: div a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo a & b
 * @a: integer 1
 * @b: integer 2
 * Return: mod a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
