#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0 && str[i] == (char)c)
		i--;
	if (i < 0)
		return ((char *) 0);
	return ((char *)(str + i));
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str != (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == 0)
		return ((char *)str);
	return ((char *) 0);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		j;

	j = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  i;
    size_t  j;
    size_t  k;

    k = 0;
    i = 0;
    j = ft_strlen(s1);
    if (!set)
        return ((char *)s1);
    while (set[k] != '\0')
    {
        if (ft_strchr(s1, set[k]))
            i++;
        if (ft_strrchr(s1, set[k]))
            j--;
        k++;
    }
    str = (char *)malloc(sizeof(char) * (j - i + 1));
    if (!str)
        return (0);
}



int main()
{
    char *p = ft_strtrim("hello world", "hdsa");
    printf("%s", p);

    return (0);
}