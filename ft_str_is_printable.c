#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int i;
    
    i = -1;
    while (str[++i])
        if ((str[i] >= 1 && str[i] <= 31) || (str[i] == 127))
		    return (0);
    return (1);
}

int main()
{
    char    *str = "salut";
    printf("%i", ft_str_is_printable(str));
}
