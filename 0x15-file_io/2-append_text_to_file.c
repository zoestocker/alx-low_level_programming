#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrfile;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	wrfile = write(fd, text_content, strlen(text_content));
	close(fd);
	if (wrfile == -1)
	{
		return (-1);
	}
	return (1);
}
