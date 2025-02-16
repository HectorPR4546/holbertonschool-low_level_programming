#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
		if (alphabet == 'Z')
		{
			alphabet = 'A';
			for (; alphabet <= 'Z'; alphabet++)
			{
				putchar(alphabet);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

