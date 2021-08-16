#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		combstrlen;
	char	*buffer;
	char	*finalstr;

	i = 0;
	j = 0;
	combstrlen = (ft_strlen(s1) + ft_strlen(s2));
	if (s1 && s2)
	{
		buffer = (char *)malloc(combstrlen * sizeof(char));
		if (buffer)
		{
			finalstr = buffer;
			while (s1[i] != '\0')
				buffer[i] = s1[i++];
			while (s2[j] != '\0')
				buffer[i++] = s2[j++];
			return (finalstr);
		}
		return (NULL);
	}
	return (NULL);
}
