#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup (s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] != '\0' && ft_strrchr(set, s1[end]))
	{
		if ((end - 1) < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	res = (char *)malloc((end - start) * sizeof(char));
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}