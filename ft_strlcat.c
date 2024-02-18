/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:31:29 by ymartiro          #+#    #+#             */
/*   Updated: 2024/02/11 18:39:43 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst_size == 0 && dst == NULL)
		return (0);
	if (dst_size != 0)
	{
		while (dst[i] != '\0' && i < dst_size)
			i++;
		while (i + j + 1 < dst_size && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i + j < dst_size)
			dst[i + j] = '\0';
	}
	return (ft_strlen(src) + i);
}