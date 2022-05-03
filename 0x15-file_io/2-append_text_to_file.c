#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The file to be printed
 * @text_content: letters to be appended
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile;
	int lenght;
	int o;

	openfile = open(filename, O_RDWR | O_APPEND);
	if (openfile == -1 || filename == NULL)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for(lenght = 0; text_content[lenght] != '\0'; lenght++)
	{
	}
	o = write(openfile, text_content, lenght);
	if (o == -1)
	{
		return (-1);
	}
	close(openfile);
	return (1);
}
