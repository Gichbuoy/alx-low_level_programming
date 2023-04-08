#include "main.h"
#include <stdio.h>
/**
 * create_file - function that creates a file
 * @filename: the name of the file to be created
 * @text_content: - string to write the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, x = 0, y = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	while (text_content[y])
		y++;
	x = write(fd, text_content, y);
	if (x < 0)
		return (-1);
	close(fd);
	return (1);
}
