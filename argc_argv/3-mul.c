#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: varible
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
