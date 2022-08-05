/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:05:42 by tpoungla          #+#    #+#             */
/*   Updated: 2022/08/05 22:05:42 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst);
	if (ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	while (i < size - 1 && *src)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(src));
}
