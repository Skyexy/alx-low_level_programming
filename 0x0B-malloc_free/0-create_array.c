#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
    unsigned int i = 0;
    char *m;
    m = malloc(sizeof(char) * size);
    
    if (m == NULL)
    {
        return(0);
    }
    while (i < size)
    {
        *m = c;
        i++;
        m = m + 1;
    }
    return(m);
}
