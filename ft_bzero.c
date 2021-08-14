#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	if (s == '\0')
		return (NULL);
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
