/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:55:08 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:56 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	i = 0;
	j = ft_strlen(dest);
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size == 0)
		return (slen);
	if (size <= dlen)
		return (size + slen);
	while (src[i] != '\0' && i < size - dlen - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dlen + slen);
}