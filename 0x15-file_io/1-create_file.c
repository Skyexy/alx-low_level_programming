#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int openfile;
	int lenght;
	int o;

	openfile = open(filename, O_CREAT | O_RDWR, 0600);
	if (openfile == -1 || filename == NULL)
	{
		return (-1);
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
