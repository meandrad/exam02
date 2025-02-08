int	max(int *tab, unsigned int len)
{
	int	result;
	int	i;
	
	result = 0;
	i = 0;
	if (len > 0)
	{
		while ((unsigned int)i < len)
		{
			if (tab[i] > result)
				result = tab[i];
			i++;
		}
		return (result);
	}
	return (0);
}
