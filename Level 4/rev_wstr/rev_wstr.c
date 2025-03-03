#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void rev_wstr(char *s)
{
	int len;
	char *rev;

	len = ft_strlen(s);
	rev = NULL;
	len --;
	while (s[len] != '\0')
	{
		if (s[len - 1] == ' ')
		{
			rev = &s[len];
			while (*rev && *rev != 32)
			{
				ft_putchar(*rev);
				rev++;
			}
			ft_putchar(' ');
		}
		else if (len == 0)
		{
			rev = &s[len];
			while (*rev && *rev != 32)
			{
				ft_putchar(*rev);
				rev++;
			}
		}
		len --;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
	return (0);
}