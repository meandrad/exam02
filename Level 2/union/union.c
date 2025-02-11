#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_union(char *s1, char *s2)
{
	int	i;
	int	lookup[256] = {0};
	
	i = 0;
	while (s1[i] != '\0')
	{
		if (lookup[(int)s1[i]] == 0)
		{
			lookup[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (lookup[(int)s2[i]] == 0)
		{
			lookup[(int)s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}