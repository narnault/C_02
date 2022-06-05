#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}


int    ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
	return (i);
}

void hexa(char s)
{
	if (s < 16)
	{
		char c = s < 10 ? s + '0' : s - 10 + 'a';
		write(1, &c , 1);
	}
	else
	{
		hexa(s / 16);
		hexa(s % 16);
	}
}

void print(char c)
{
	if (c < 16)
		ft_putstr("0");
	hexa(c);
}

void *ft_print_memory(void *str, unsigned int size)
{
	char buf[9];
	buf[8] = 0;
	int n, v;
	char c;

	for (int i = 0; i < size; i += 16)
	{
		n = i;
		for (int j = 7; j >= 0; j--)
		{
			v = n % 16;
			buf[j] = v < 10 ? v + '0' : v - 10 + 'a';
			n /= 16;
		}
		ft_putstr(buf);
		ft_putstr(": ");
		for (int j = 0; j < 16; j += 2)
		{
			print(((char *)str + i)[j]);
			print(((char *)str + i)[j + 1]);
			ft_putstr(" ");
		}
		for (int j = 0; j < 16; j++)
		{
			c = ((char *)str + i)[j];
			if (c > 31 && c < 127)
				write(1, &c, 1);
			else
				write(1, ".", 1);
		}
		ft_putstr("\n");
	}
	return str;
}

int main()
{
	char *str = "Salut les aminches c'est cool show mem on fait de truc terrible\1\2";
	ft_print_memory(str, ft_strlen(str));
	ft_print_memory(str, 0);
}
