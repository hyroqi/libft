#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ds;
	const unsigned char	*sr;

	if (!dest || !src || !n || dest == 0)
		return (dest);
	i = 0;
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
