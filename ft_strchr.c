/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:43:20 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/21 13:55:21 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (str)
	{
		if (*str == c)
		{
			ptr = (char *)str;
			return (ptr);
		}
		str++;
	}
	return (ptr);
}
