/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:20:55 by ymartiro          #+#    #+#             */
/*   Updated: 2024/02/11 20:38:20 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size > 65535 || count > 65535)
		return (NULL);
	m = (void *)malloc(count * size);
	if (!m)
		return (NULL);
	ft_bzero(m, count * size);
	return (m);
}
