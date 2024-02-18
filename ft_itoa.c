#include "libft.h"
#include <stdio.h>

static	int		int_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		while (n)
		{
			i++;
			n = n / 10;
		}
		return (i);
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static	char	*fill_str(char *str, int n)
{
	int	i;

	i = int_len(n);
	str[i + 1] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
		while (--i > 0)
		{
			str[i] = (n % 10) + 48;
			n = n / 10;
		}
	}
	while (i-- >= 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = int_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	fill_str(str, n);
	return (str);
}