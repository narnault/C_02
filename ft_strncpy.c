#include <stdio.h>

void    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int     i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int main()
{
	unsigned int	n;

	n = 3;
	char src[] = "salut";
	char dest[] = "Bonjour";
	ft_strncpy(dest, src, n);
	printf ("%s", dest);
}
