#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*to_lower(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 62 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	to_upper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == 32 || str[i + 1] == '\0') && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int main (int argc, char *argv[])
{
	char *str;
	int i;

	i = 1;
	if (argc != 1)
	{
		while (argv[i] != NULL)
		{
			str = str_lower(argv[i]);
			ft_toupper(str);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}