#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] == 32)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == 32 && s[i + 1] == 32)
			i++;
		if (s[i] != 32 || (s[i] == 32 && s[i + 1] != '\0'))
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