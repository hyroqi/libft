#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*res;
	unsigned int		i;

	i = 0;
	if (!f || !s)
		return (0);
	res = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!res)
		return (res);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
