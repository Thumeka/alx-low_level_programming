#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - that appends text at the end of a file.
* @filename: name of file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{

	int open_f, j = 0;

	if (filename == NULL)

		return (-1);

	open_f = open(filename, O_WRONLY | O_APPEND);

	if (open_f == -1)

		return (-1);

	if (text_content != NULL)
	{

		while (text_content[j])

			j++;

		if (write(open_f, text_content, j) != j)

			return (-1);
	}

	close(open_f);

	return (1);
}
