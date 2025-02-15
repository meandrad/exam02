#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*array;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start <= end)
			array[i] = start + i;
		else
			array[i] = start - i;
		i++;
	}
	return (array);
}

