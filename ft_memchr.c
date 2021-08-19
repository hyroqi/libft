#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	cast;

	i = 0;
	cast = (unsigned char)c;
	sr = ((unsigned char *)str);
	while (i < n)
	{
		if (sr[i] == cast)
			return ((unsigned char *)&sr[i]);
		i++;
	}
	return (0);
}
