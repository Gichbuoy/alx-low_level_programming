#include "main.h"
#include <stdio.h>
/**
 * create_file - copy contents of a file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @argv: argument vector
 *
 * Return: nothing
 */
void create_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
