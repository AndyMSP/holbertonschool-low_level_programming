#include "main.h"

/**
 * read_textfile - read file and print specified number of characters to output
 * @filename: pointer to char representing filename
 * @letters: size_t number of letters to print
 *
 * Return: ssize_t letters that were actually printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, actual_read, actual_written;

	/*open file and assign it to fd and check for errors*/
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*designate required space for buffer and check for errors*/
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	/*read data and write it to screen and check for errors*/
	actual_read = read(fd, buff, letters);
	if (actual_read == -1)
		return (0);
	actual_written = write(STDOUT_FILENO, buff, actual_read);
	if (actual_written == -1)
		return (0);

	close(fd);

	free(buff);

	return (actual_written);
}
