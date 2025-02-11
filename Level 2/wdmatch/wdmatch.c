#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while (s2[j] != '\0' && s1[i] != '\0')
	{
		check = 0;
		if (s1[i] == s2[j])
		{
			check = 1;
			i++;
		}
		j++;
	}
	if (check == 0)
		return ;
	else
		ft_putstr(s1);
}
int main (int argc, char *argv[])
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}