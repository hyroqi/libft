#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	i = 0;
	x = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
