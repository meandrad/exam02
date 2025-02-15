int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_check_base(char c, int baselen)
{
	char	*lbase = "0123456789abcdef";
	char	*ubase = "0123456789ABCDEF";
	int		i;

	i = 0;
	while (i < baselen)
	{
		if (c == lbase[i] || c == ubase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	flag;
	int	result;

	i = 0;
	flag = 1;
	result = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (str[i] != '\0' && ft_check_base(str[i], str_base) == 1)
	{
		result *= str_base;
		if (str[i] >= 48 && str[i] <= 57)
			result += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 'A' + 10;
		i++;
	}
	return (result * flag);
}

#include <stdio.h>
int main (int argc, char *argv[])
{
	int number;

	if (argc == 2)
	{
		number = ft_atoi_base(argv[1], 16);
		printf("%d", number);
	}
	return (0);
}