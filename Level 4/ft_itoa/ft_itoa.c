#include <stdlib.h>

int	count_number(int nbr)
{
	int	i;
	long	num;

	i = 0;
	num = nbr;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);

}

char *ft_itoa (int nbr)
{
	char	*str;
	long	num;
	int		length;

	length = count_number(nbr);
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	num = nbr;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		length--;
		if (str[length] != '-')
			str[length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
