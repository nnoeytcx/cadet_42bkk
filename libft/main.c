/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 05:15:46 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/23 05:15:46 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strnstr.c"

int	main(void)
{
	char	*str1 = "me and bae";
	char	*str2 = "bae";

	printf("%s", ft_strnstr(str1, str2, 10));
	return (0);
}
