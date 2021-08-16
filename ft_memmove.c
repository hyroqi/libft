#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sc;

	if (!dest || !src)
		return (NULL);
	if (n == 0)
		return (dest);
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
		ft_memcpy(dest, src, n);
	return (dest);
}
