#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (i <= ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[ft_strlen(s) + 1] = '\0';
	return (str);
}