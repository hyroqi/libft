#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*sr;

	i = 0;
	sr = ((unsigned char *)str);
	while (i < n)
	{
		if (sr[i] == c)
			return ((unsigned char *)&sr[i]);
		i++;
	}
	return (0);
}
