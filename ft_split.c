/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:15:05 by tpoungla          #+#    #+#             */
/*   Updated: 2022/09/21 14:15:05 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strndup(char const *s, int i, int j)
{
	char	*res;
	size_t	k;

	k = 0;
	res = malloc(sizeof(char) * j - i + 1);
	if (!res)
		return (0);
	while (i <= j)
	{
		res[k] = s[i];
		i++;
		k++;
	}
	return (res);
}

void	ft_get_str(char const *s, char c, char **res)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j])
			{
				if (s[j] != c)
					j++;
				else
					break ;
			}
			res[k] = ft_strndup(s, i, j - 1);
			k++;
			i = j;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		co;
	char	**res;

	co = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			co++;
		i++;
	}
	res = malloc(sizeof(char *) * (co + 1));
	if (!res)
		return (NULL);
	ft_get_str(s, c, res);
	while (res)
	{
		printf("%s\n",*res);
		res++;
	}
	return (res);
}
