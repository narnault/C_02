#include <stdio.h>

void	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "salut";
	char dest[] = "Bonjour";
	ft_strcpy(dest, src);
	printf("%s", dest);
}
