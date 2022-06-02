#include "main.h"

int get_length(char *str);

/**
 * append_text_to_file - appends new text to a file
 * @filename: name of the file
 * @text_content: content to append to the file
 *
 * Return: 1 (Success) or -1 (errno)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;
	char *str = text_content;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (str)
	{
		len = get_length(str);
		wr = write(fd, str, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * get_length - returns the number of characters in the string
 * @str: string parameter
 *
 * Return: length of the string
 */
int get_length(char *str)
{
	int i, length = 0;

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}
