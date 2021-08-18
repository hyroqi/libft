#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*res;
	unsigned int		i;
	int					strlength;

	i = 0;
	if (!f || !s)
		return (0);
	strlength = (ft_strlen(s) + 1);
	res = (char *)malloc(strlength * sizeof(char));
	if (!res)
		return (res);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
