#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: The file to be printed
 * @text_content: text to be given in the file
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int create_file(const char *filename, char *text_content)
{
	int openfile;
	int lenght;
	int o;

	openfile = open(filename, O_RDWR| O_CREAT| O_TRUNC, 0600);
	if (openfile == -1 || filename == NULL)
	{
		return (-1);
	}
	if (*text_content == '\0')
	{
		close(openfile);
		return (1);
	}
	for (lenght = 0; text_content[lenght] != '\0'; lenght++)
	{
	}
	if (text_content != NULL)
	{
		o = write(openfile, text_content, lenght);
	}
	if (o == -1)
	{
		return (-1);
	}
	close(openfile);
	return (1);
}