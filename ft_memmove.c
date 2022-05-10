/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:31:53 by hgabriel          #+#    #+#             */
/*   Updated: 2022/05/10 10:32:37 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sc;

	if ((!dest && !src) || n == 0)
		return (dest);
	ds = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	if (sc < ds)
	{
		while (n)
		{
			ds[n - 1] = sc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
