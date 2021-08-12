#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
