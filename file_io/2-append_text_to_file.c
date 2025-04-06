#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text
 *
 * @filename: pointer
 *
 * @text_content: pointer
 *
 * Return: 1 or -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fOpen, fWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fOpen = open(filename, O_WRONLY | O_APPEND);

	if (fOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fWrite = write(fOpen, text_content, length);

	if (fWrite == -1)
		return (-1);

	close(fOpen);

	return (1);
}
