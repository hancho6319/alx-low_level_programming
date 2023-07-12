#include "main.h"

/**
 * append_text_to_file - This is a function that appends text at the
 * @filename: The file name
 * @text_content: The text content
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

