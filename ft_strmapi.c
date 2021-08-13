#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!f || !s)
		return (0);
	res = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!res)
		return (0);
	while (s[i] != '\0')
	{
		res = f(i, s[i]);
		i++;
	}
	return (res);
}
