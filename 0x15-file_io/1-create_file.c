#include "main.h"

/**
 * create_file - creates a file or replaces contents
 * @filename: name of file
 * @text_content: string to be written to file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, test, len;

	if (filename == NULL)
		return (-1);

	/*open or create file*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
/*
 *	printf("mode = %d\n", S_IRUSR | S_IWUSR);
 *	printf("S_IRUSR = %d\n", S_IRUSR);
 *	printf("S_IWUSR = %d\n", S_IWUSR);
 */
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
