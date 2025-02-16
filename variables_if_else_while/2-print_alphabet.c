#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: 0 (success)
 */
in main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
