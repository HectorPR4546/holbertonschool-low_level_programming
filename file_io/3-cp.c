#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies content of file
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy
 */

int main(int argc, char **argv)
{
	int f, f2, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(f2, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(f2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);
	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);

	return (0);
}
