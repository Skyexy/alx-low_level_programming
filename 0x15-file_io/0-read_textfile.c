#include "main.h"

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
        buff[letters] = '\0';
        close(openfile);
        
        o = write(STDOUT_FILENO, buf, letters);
        if (o == -1)
        {
                return (0);
        }
        return (o);
}
