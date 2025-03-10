#include <stdio.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: varible
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
