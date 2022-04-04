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
	int fd;
	char *buff;
	size_t actual;

	fd = open(filename, O_RDONLY);

	buff = malloc(letters * sizeof(char));

	actual = read(fd, buff, letters);

	actual = write(STDOUT_FILENO, buff, actual);

	return (actual);

	return (0);
}
