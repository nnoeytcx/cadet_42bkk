/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:08:53 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/23 05:18:00 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	if (*s == '\0')
		return (NULL);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		n;
	size_t		j;
	char		*ptr;

	ptr = NULL;
	i = 0;
	if (little == NULL)
		return ((char *)big);
	n = ft_strlen(little);
	while (big[i] && i <= len - n)
	{
		j = 0;
		while (little[j])
		{
			if (little[j] == big [i + j])
				j++;
			else
				break ;
		}
		if (j == n)
			return ((char *)&big[i]);
		i++;
	}
	return (ptr);
}
