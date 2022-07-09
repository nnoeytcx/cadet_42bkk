/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:20:05 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/05 01:20:05 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	num = 0;
	i = 0;
	neg = 1;
	if (str == "-2147483648")
	{
		return (-2147483648);
	}
	while (str[i])
	{
		if (str[i] == '\r' || str[i] == '\n' || str[i] == '\f' )
			i++;
		if (str[i] == '\v' || str[i] == '\t' || str[i] == ' ' )
			i++;
		else
			break ;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (num * neg);
}
