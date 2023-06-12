#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int open_f, j = 0;

	if (filename == NULL)
		return (-1);

	open_f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (open_f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		if (write(open_f, text_content, j) != j)
			close(open_f);
			return (-1);
	}
	close(open_f);
	return (1);
}
