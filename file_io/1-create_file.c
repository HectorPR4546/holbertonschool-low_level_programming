#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file -  new file
 *
 * @filename: description
 *
 * @text_content: content description
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, length = 0, fpWrite;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(fp, text_content, length);

	if (fpWrite == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
