/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:24:37 by tpoungla          #+#    #+#             */
/*   Updated: 2022/08/09 00:24:37 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int pos, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;
	size_t	newlen;

	if (pos > ft_strlen(str))
		newlen = 0;
	else if ((ft_strlen(str) - pos) >= len)
		newlen = len;
	else
		newlen = ft_strlen(str) - pos;
	sub = (char *)malloc(sizeof(char) * (newlen + 1));
	if (!sub)
		return (0);
	i = pos;
	j = 0;
	while (j < newlen)
		sub[j++] = str[i++];
	sub[j] = '\0';
	return (sub);
}
