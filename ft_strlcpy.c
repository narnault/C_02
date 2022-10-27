#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;

    i = -1;
    j = -1;
    while(src[++i])
    if (size == 0)
        return (i);
    while (src[++j] && j < (size - 1))
        dest[j] = src[j];
    dest[j] = '\0';
    return (i);
}

int        main(void)
{
    char    dest[30];
    char    *src;
    unsigned int        size;

    src = "ceci et un test tu voissss";
    size = 10;
    printf ("%i\n", ft_strlcpy(dest, src, size));
    printf ("\n%s\n", dest);
}
