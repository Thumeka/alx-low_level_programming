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
	int op_f, f = 0;

	if (filename == NULL)
		return (-1);

	op_f = open(filename, O_WRONLY | O_APPEND);
	if (op_f == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[f])
			f++;
		if (write(op_f, text_content, f) != f)
			return (-1);
	}
	close(op_f);
	return (1);
}
