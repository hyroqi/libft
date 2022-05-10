/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:31:55 by hgabriel          #+#    #+#             */
/*   Updated: 2022/05/10 10:32:36 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*p;

	i = 0;
	if (!s || s == 0)
		return (NULL);
	p = (char *)s;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (s);
}
