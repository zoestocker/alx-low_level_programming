#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX std out.
 * @filename: the name of the file
 * @letters: list of letters
 *
 * Return: the number of letters it can read and print
 * or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wcount = 0, rfile;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rfile = read(fd, buffer, letters);
	if (rfile == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	while (wcount < rfile)
	{
		if (write(STDOUT_FILENO, &buffer[wcount], 1) == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		wcount++;
	}
	close(fd);
	free(buffer);
	return (rfile);
}
