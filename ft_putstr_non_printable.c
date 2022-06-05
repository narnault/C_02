#include <unistd.h>

void	hexa(int i) {

	char	*str;

	str = "0123456789abcdef";
	write(1, &str[i / 16], 1);
	write(1, &str[i % 16], 1);
}

void	ft_putstr_non_printable(char *str) {

	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main() {
    
    ft_putstr_non_printable("dasf sgedfa \n \t \f zh");
}
