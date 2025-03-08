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
	char	*s;
	int		length;
	long	num;

	num  = nbr;
	length = count_number(nbr);
	s = (char *)malloc(sizeof(char) * (length + 1));
	if (!s)
		return (NULL);
	s[length] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		length--;
		s[length] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}