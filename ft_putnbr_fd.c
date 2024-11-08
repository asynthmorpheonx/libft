/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:40:49 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/08 11:43:34 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;

	m = 0;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		m = -n;
	}
	else
		m = n;
	if (m > 9)
	{
		ft_putnbr_fd(m / 10, fd);
		ft_putchar_fd((m % 10) + '0', fd);
	}
	else
		ft_putchar_fd(m + '0', fd);
}
