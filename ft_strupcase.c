#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
		    str[i] -= 32;
	return (str);
}

int main()
{
	char str[] = "Salut tu vas bien";
	printf("%s", ft_strupcase(str));
}
