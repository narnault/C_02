#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int     i;

    i = -1;
    while (str[++i])
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    return (str);
}

int main()
{
    char str[] = "SALUT TU VAS BIEN";
    printf("%s", ft_strlowcase(str));
}
