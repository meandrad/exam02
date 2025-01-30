#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(void)
{
	ft_putstr("Oi tudo bem?");
	return (0);
}