#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sc;

	if (!dest || !src || !n)
		return (NULL);
	ds = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	if (sc < ds)
	{
		while (n)
		{
			ds[n] = sc[n];
			n--;
		}
	}
	else
		ft_memcpy(ds, sc, n);
	return (dest);
}
