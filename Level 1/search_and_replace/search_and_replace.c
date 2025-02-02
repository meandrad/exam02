#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
void	ft_search(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *a)
		{
			str[i] = *b;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 4)
	{
		if ((ft_strlen(argv[2]) > 1) || (ft_strlen(argv[3]) > 1))
		{
			write(1, "\n", 1);
			return (0);
		}
		else
			ft_search(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
	return (0);
}