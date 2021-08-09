#include "stdio.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sc;

	ds = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	if (sc < ds)
		while (n--)
			ds[n] = sc[n];
	else
		ft_memcpy(ds, sc, n);
	return (dest);
}