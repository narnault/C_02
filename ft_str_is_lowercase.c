#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
    int i;
    
    i = -1;
    while (str[++i])
        if (!(str[i] >= 'a' && str[i] <= 'z'))
		    return (0);
    return (1);
}

int main()
{
    char    *str = "salut";
    printf("%i", ft_str_is_lowercase(str));
}
