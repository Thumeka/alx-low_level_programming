#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file to read
 * @letters: to read
 *
 * Return: size to read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_f, f_write, open_f;
	char *buff;

	if (filename == NULL)
		return (0);

	open_f = open(filename, O_RDONLY);

	if (open_f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	read_f = read(open_f, buff, letters);
	if (read_f == -1)
	{
		return (0);
	}
	f_write = write(STDOUT_FILENO, buff, read_f);
	if (f_write == -1)
	{
		return (0);
	}

	free(buff);
	close(open_f);
	return (read_f);
}
