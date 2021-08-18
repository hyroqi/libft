#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	x = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
