#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads textfile and prints it to the POSIX stdout
 * @filename: name of the file being read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(fd, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(fd);
	return (y);
}
