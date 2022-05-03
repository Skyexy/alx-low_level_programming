#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: The file to be printed
 * @letters: the number of file name to be printed;
 * Return: On success o.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openfile;
	char *buf = malloc(sizeof(char) * letters);
	int o = 0;

	openfile = open(filename, O_RDONLY);
	if (openfile == -1 || filename == NULL)
	{
		return (0);
	}
	read(openfile, buf, letters);
	close(openfile);
	while (buf[o] != '\0')
	{
		o += write(STDOUT_FILENO, buf[o], 1);
		if (o == -1)
		{
			return (0);
		}
	}
	return (o);
}
