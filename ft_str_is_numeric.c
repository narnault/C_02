#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (str[i])
    {
	(!(str[i] >= '0' && str[i] <= '9')     
    		return (0);
	i++;
    }
    return (1);
}

int main()
{
    char    *str = "Salut";
    printf ("%i", ft_str_is_numeric(str));
}
