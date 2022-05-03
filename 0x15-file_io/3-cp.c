#include "main.h"
#define BUFFERSIZE 1024

/**
 * main - copies the contents of one file to another
 * @c: argument count
 * @v: argument values
 *
 * Return: 0
 */
int main(int c, char **v)
{
	int fd, dest, rfile, check;
	char buffer[BUFFERSIZE];

	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (c != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(v[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);
	dest = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]), exit(99);
		rfile = check = 1;
	}
	while (rfile)
	{
		rfile = read(fd, buffer, BUFFERSIZE);
			if (rfile == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);
			}
			if (rfile > 0)
			{
				check = write(dest, buffer, rfile);
				if (check == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]), exit(99);
				}
			}
	}
	check = close(fd);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't clode fd %d\n", dest), exit(100);
	return (0);
}
