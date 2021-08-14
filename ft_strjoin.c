#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*finalstr;

	i = 0;
	j = 0;
	finalstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) * sizeof(char)));
	if (!finalstr)
		return (0);
	while (s1 != '\0')
	{
		finalstr[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2 != '\0')
	{
		finalstr[i] = s1[j];
		i++;
		j++;
	}
	return (finalstr);
}
