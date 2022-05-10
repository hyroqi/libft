/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:32:20 by hgabriel          #+#    #+#             */
/*   Updated: 2022/05/10 10:32:27 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup (s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] != '\0' && ft_strrchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	res = (char *)malloc((end - start + 1) * sizeof(*s1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}
