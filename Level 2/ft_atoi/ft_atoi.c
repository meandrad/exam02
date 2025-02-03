int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	flag;
	int	result;
	int	i;

	i = 0;
	result = 0;
	flag = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if ((str[i] == '+') && (str[i + 1] != '-'))
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * flag);
}
