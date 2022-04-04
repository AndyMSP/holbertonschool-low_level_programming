#include "main.h"

/**
 * append_text_to_file - appends text to existing file
 * @filename: name of existing file
 * @text_content: string to be appended to file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, test, len;

	if (filename == NULL)
		return (-1);

	/*open file or return error*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/*write contents to file*/
	if (text_content != NULL)
	{
		len = strlen(text_content);
		test = write(fd, text_content, len);
		if (test == -1)
			return (-1);
	}

	return (1);
}
