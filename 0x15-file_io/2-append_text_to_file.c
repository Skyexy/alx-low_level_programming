#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int openfile;
	int lenght;
	int o;

	openfile = open(filename, O_APPEND);
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
