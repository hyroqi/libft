#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sc;

	if (!dest || !src || !n)
		return (NULL);
	ds = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	if (sc < ds)
	{
		ds += n;
		sc += n;
		while (n--)
		{
			*--ds = *--sc;
		}
	}
	else
		ft_memcpy(ds, sc, n);
	return (dest);
}
