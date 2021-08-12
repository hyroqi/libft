#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strt;
	char	*substr;

	i = 0;
	strt = ((size_t)start);
	substr = (char)malloc(len * sizeof(char));
	if (!substr)
		return (0);
	while (i < len)
	{
		substr[i] = s[strt];
		i++;
		strt++;
	}
	return (substr);
}
