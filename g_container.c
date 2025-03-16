/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:41:41 by mel-mouh          #+#    #+#             */
/*   Updated: 2025/03/16 08:46:09 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**g_container(void)
{
	static t_list	*pp;

	return (&pp);
}

void	clear_container(void)
{
	ft_lstclear(g_container(), free);
}

void	*safe_alloc(size_t byts_count, int mode)
{
	void	*array;
	t_list	*new_node;

	array = malloc(byts_count);
	if (!array)
	{
		clear_container();
		return (perror(""), NULL);
	}
	new_node = ft_lstnew(array);
	if (!new_node)
	{
		free(array);
		clear_container();
		return (perror("ft_lstnew failed"), NULL);
	}
	ft_lstadd_back(g_container(), new_node);
	if (!mode)
		ft_bzero(array, byts_count);
	return (array);
}
