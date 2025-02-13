#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_check(char c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}
void	epur_str(char *s)
{
	int	i;

	i = 0;
	while (ft_check(s[i]) == 1)
		i++;
	while (s[i] != '\0')
	{
		while ((ft_check(s[i]) == 1 && ft_check(s[i + 1]) == 1))
			i++;
		if (ft_check(s[i]) == 0 || ((ft_check(s[i]) == 1) && s[i + 1] != '\0'))
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}