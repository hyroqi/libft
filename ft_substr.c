#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strt;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	strt = ((size_t)start);
	if ((size_t)ft_strlen(s) < strt)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s) < len)
		substr = (char *)malloc((ft_strlen(s) - strt + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	while (i < len)
	{
		substr[i] = s[strt + i];
		i++;
		strt++;
	}
	substr[i] = '\0';
	return (substr);
}
