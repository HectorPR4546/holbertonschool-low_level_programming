#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 *
 * Return: Always argc.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
