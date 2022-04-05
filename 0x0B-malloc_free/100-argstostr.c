#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int p = 0;
    int o = 0;
    char *g;
    int z = 0;
    while (p < ac)
    {
        int y = 0;
        char *r = av[p];
        while (r[y] != '\0')
        {
            y++;
            o++;
        }
        p++;
    }
    g = malloc((sizeof(char) * o) + (ac + 1));
    p = 0;
    while (p < ac)
    {
        int y = 0;
        char *r = av[p];
        while (r[y] != '\0')
        {
            g[z] = r[y];
            z++;
            y++;
        }
        g[z] = '\n';
        z++;
        p++;
    }
    g[z] = '\0';
    return (g);
}
