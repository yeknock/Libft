#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substring;
    size_t  i;
	size_t	j;

    substring = malloc(sizeof(char) * (len + 1));
    i = 0;
	j = 0;
    if (!substring || !s)
        return (0);
    while (s[i] != '\0')
    {
		if (i == start)
			break ;
		i++;
    }
	while (j < len)
	{
		substring[j] = s[i];
		i++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}