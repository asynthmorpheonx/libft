/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:24:48 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/07 16:47:36 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;

	if (count == 0)
		return (malloc(0));
	if (size < SIZE_MAX / count)
	{
		arr = malloc(count * size);
		if (arr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	ft_bzero(arr, count * size);
	return (arr);
}
