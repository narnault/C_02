#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    int i;
    
    i = -1;
    while (str[++i])
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        	return (0);
    return (1);
}

int main()
{
    char    *str = "Salut";
    printf("%i", ft_str_is_alpha(str));
}
