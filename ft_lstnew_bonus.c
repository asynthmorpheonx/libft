/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:41:18 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:15 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_list;

	my_list = (t_list *)malloc(sizeof(t_list));
	if (my_list == NULL)
		return (NULL);
	my_list->content = content;
	my_list->next = NULL;
	return (my_list);
}
