#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!dest || !src || !n)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
