#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char *rev_print(char *str)
{
	int i;

	i = ft_strlen(str);
	while (i --)
	{
		write(1, &str[i], 1);
	}
	return (str);
}
