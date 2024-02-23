/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:07 by ymartiro          #+#    #+#             */
/*   Updated: 2024/02/18 21:11:37 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	big_size;
	size_t	little_size;

	little_size = ft_strlen(little);
	if (little_size == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	big_size = ft_strlen(big);
	i = 0;
	while ((little_size + i) <= len && i < big_size)
	{
		if (ft_strncmp(big + i, little, little_size) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
