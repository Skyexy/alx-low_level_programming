#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    char *t;
    int y = 0;
    int p = 0;
    int l;
    int k = 0;
    int m = 0;
    if (!s1)
    {
        s1[0] = '\0';
    }
    if (!s2)
    {
        s2[0] = '\0';
    }
    while (s1[y] || s2[p] != '\0')
    {
        if (s1[y] != '\0')
        {
            y++;
        }
        if (s2[p] != '\0')
        {
            p++;
        }
    }
    l = (y + p);
    t = malloc(sizeof(char) * l);
    if (t == NULL)
    {
        return (NULL);
    }
    while (k < l)
    {
        if (k < y)
        {
            t[k] = s1[k];
        }
        else if (k >= y)
        {
            t[k] = s2[m];
            m++;
        }
        k++;
    }
    t[k] = '\0';
    return(t);
}
