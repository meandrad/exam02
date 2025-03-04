#include <stdlib.h>

#define WD_LEN 1000

char **split(char *str)
{
	char **array;
	int i = 0;
	int j = 0;
	int k;

	array = malloc(WD_LEN);
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			array[j] = malloc(WD_LEN);
			while(str[i] > 32)
				array [j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}
