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

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub || !str)
		return (0);
	i = pos;
	j = 0;
	while (str[i] && j < len)
		sub[j++] = str[i++];
	sub[j] = '\0';
	return (sub);
}
