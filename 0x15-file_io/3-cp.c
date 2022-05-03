int main(int ac, char **av)
{
        int file_from;
        int file_to;
        char *string = malloc(1024);
        int lo, op;

        if (ac != 3)
        {
                dprintf(STDERR_FILENO, "Usage: %s %s",av[1], av[2]);
                exit (97);
        }
        file_from = open(av[1], O_RDWR);
        if (file_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
                exit (98);
        }
        file_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC | O_APPEND, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
        if (file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
                exit (99);
        }
        lo = 1024;
        while (lo = 1024)
        {
                lo = read(file_from, string, 1024);
                if (lo == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
                        exit (98);
                }
                op = write(file_to, string, lo);
                if (op == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
                        exit (99);
                }
        }
        free(string);
        lo = close(file_from);
        if (lo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	op = close(file_to);
	if (op == -1)
	{
	        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
}
