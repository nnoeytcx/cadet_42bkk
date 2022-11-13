/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:41:08 by tpoungla          #+#    #+#             */
/*   Updated: 2022/11/11 11:41:08 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *node;

    if (lst == NULL || del == NULL)
        return ;
    node == *lst;
    while (node != NULL)
    {
        (del)(node -> content);
        *lst = node -> next;
        free(node);
        node = *lst;
    }
}