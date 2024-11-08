/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:44:40 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:07 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr_node;
	t_list	*next_node;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	curr_node = *lst;
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		(del)(curr_node->content);
		free(curr_node);
		curr_node = next_node;
	}
	*lst = NULL;
}
