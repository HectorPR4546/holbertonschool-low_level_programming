#include <stdio.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: varible
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}
