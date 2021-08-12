#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*ptr;

	size = ft_strlen(s);
	ptr = (char*)malloc(size*sizeof(char));
	if (!ptr)
		return (0);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
