/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:34:28 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:30 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srt;
	size_t			i;

	dst = (unsigned char *)dest;
	srt = (unsigned char *)src;
	i = 0;
	if (dest < src)
		return (ft_memcpy(dst, srt, n));
	if (dest == NULL && src == NULL)
		return (NULL);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = srt[i];
		}
	}
	return (dst);
}
