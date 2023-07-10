#include "main.h"

/**
* read_textfile - reads a text file and prints it to the
* POSIX standard output.
* @filename: file to read
* @letters: read
*
* Return: size to read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd_f, f_wr, op_f;
	char *buffs;

	if (filename == NULL)
		return (0);

	op_f = open(filename, O_RDONLY);
	if (op_f == -1)
		return (0);

	buffs = malloc(sizeof(char) * letters);
	if (buffs == NULL)
	{
		return (0);
	}
	rd_f = read(op_f, buffs, letters);
	if (rd_f == -1)
	{
		return (0);
	}
	f_wr = write(STDOUT_FILENO, buffs, rd_f);
	if (f_wr == -1)
	{
		return (0);
	}
	free(buffs);
	close(op_f);
	return (rd_f);
}
