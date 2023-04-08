#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append
 * @text_content: string to add at end of file
 *
 * Return: 1 if success, (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, x = 0, y = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
