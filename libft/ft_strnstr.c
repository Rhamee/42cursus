#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = 0;
	while (i < len && big[i])
	{
		if (!little[j])
			return (big[i]);
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++
	}
	return (NULL);
}