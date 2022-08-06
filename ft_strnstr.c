/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:08:53 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/23 08:48:14 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		n;
	size_t		j;
	char		*ptr;

	ptr = NULL;
	i = 0;
	if (len == 0)
		return (NULL);
	if (little == NULL)
		return ((char *)big);
	n = ft_strlen(little);
	while (big[i] && i <= len - n)
	{
		j = 0;
		while (little[j] && little[j] == big [i + j])
			j++;
		if (j == n)
			return ((char *)&big[i]);
		i++;
	}
	return (ptr);
}
