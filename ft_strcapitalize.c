#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = -1;
	while (str[++i])
        if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
                (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || 
                    (str[i - 1] >= '0' && str[i - 1] <= '9')))
                        if (str[i] >= 'a' && str[i] <= 'z')
                            str[i] -= 32;
    return (str);
}

int main()
{
        char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("%s", ft_strcapitalize(str));
}
