#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		combstrlen;
	char	*buffer;
	char	*finalstr;

	combstrlen = (ft_strlen(s1) + ft_strlen(s2));
	if (s1 && s2)
	{
		buffer = (char *)malloc(combstrlen * sizeof(char));
		if (buffer)
		{
			finalstr = buffer;
			while (*s1 != '\0')
				*buffer++ = *s1++;
			while (*s2 != '\0')
				*buffer = *s2++;
			return (finalstr);
		}
		return (NULL);
	}
	return (NULL);
}
