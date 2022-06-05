#include <unistd.h>

int     ft_str_is_alpha(char *str)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        	return (0);
        i++;
    }
    return (1);
}

int main()
{
    char    *str = "Salut";
    ft_str_is_alpha(str);
}
