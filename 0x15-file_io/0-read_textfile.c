#include "main.h"

/**
 * read_textfile - reads and prints a certain number of letters from a file
 * @filename: name of the file to read from
 * @letters: number of letters to read from the file
 *
 * Return: number of letters written to stdout or 0 (errno)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fd;
	ssize_t num_read = 0, num_write = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num_read = read(fd, buffer, letters);
	close(fd);
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write == -1 || num_write < num_read)
		return (0);
	return (num_write);
}
