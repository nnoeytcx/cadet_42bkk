/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:44:56 by tpoungla          #+#    #+#             */
/*   Updated: 2022/11/11 11:44:56 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list   *lst, void (*f)(void *))
{
    t_list  *node;

    if (lst == NULL || f == NULL)
        return ;
    node = lst;
    while (node != NULL)
    {
        (f)(node -> content);
        node = node -> next;
    }
}