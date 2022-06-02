#include "main.h"

void read_file(char *filename, char *buffer);
void write_file(char *filename, char *buffer);

/**
 * main - main entry point of the program
 * @ac: count of command line arguments
 * @av: vector containing command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * (1024 + 1));
	/*Reads from file_from*/
	read_file(av[1], buffer);
	/*Writes to file_to */
	write_file(av[2], buffer);
	free(buffer);
	return (0);
}

/**
 * read_file - copies the contents of a file into a temporary storage place
 * @filename: name of the file
 * @buffer: temporary storage place
 *
 * Return: void
 */
void read_file(char *filename, char *buffer)
{
	int file_from, isclosed, isread;

	/*Open file_from*/
	file_from = open(filename, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		free(buffer);
		exit(98);
	}
	/*Reads file content into buffer*/
	isread = read(file_from, buffer, 1024);
	if (isread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		free(buffer);
		exit(98);
	}
	/*Close file_from*/
	isclosed = close(file_from);
	if (isclosed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		free(buffer);
		exit(100);
	}
}

/**
 * write_file - copies the contents of a temporary storage place into a file
 * @filename: name of the file
 * @buffer: temporary storage place
 *
 * Return: void
 */
void write_file(char *filename, char *buffer)
{
	int file_to, isclosed, iswritten;

	/*Open file_to*/
	file_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		free(buffer);
		exit(99);
	}
	/*Write buffer contents into the new file*/
	iswritten = write(file_to, buffer, 1024);
	if (iswritten == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		free(buffer);
		exit(99);
	}

	/*Close file_to*/
	isclosed = close(file_to);
	if (isclosed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		free(buffer);
		exit(100);
	}

}
