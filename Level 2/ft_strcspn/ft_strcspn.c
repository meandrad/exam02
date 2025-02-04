#include <stdlib.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	j = 0;
	while(reject[j] != '\0')
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			i++;
		}
		j++;
	}
	return (i);
}
