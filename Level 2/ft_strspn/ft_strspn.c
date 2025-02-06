#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	int check;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		check = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
		return (i);
		i++;
	}
	return (i);
}

