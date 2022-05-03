#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filenae: The file to be printed
 * @letters: the number of file name to be printed;
 * Return: On success o.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int openfile;
        char *buf = malloc(sizeof(char)*letters);
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
                o += _putchar(buf[o]);
                if (o == -1)
                {
                        return (0);
                }
        }
        return (o);
}
