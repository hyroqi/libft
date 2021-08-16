#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = ((unsigned char *)str1);
	s2 = ((unsigned char *)str2);
	while (s1[i] == s2[i] && i < n && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return ((int)s1[i] - (int)s2[i]);
}
