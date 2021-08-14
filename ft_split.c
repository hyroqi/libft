#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int	i;
	int	isword;
	int	wordcount;

	i = 0;
	isword = 0;
	wordcount = 0;
	while (s[i] != '\0')
	{
		if (isword == 0 && s[i] != c)
		{
			isword = 1;
			wordcount++;
		}
		else if (isword == 0 && s[i] == c)
			isword  = 0;
		i++;
	}
	return (wordcount);
}

static int	ft_wordstrlen(char *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static void	*ft_free(char **res, int n)
{
	while (n > 0)
	{
		free(res[n]);
		n--;
	}
	free(res);
	return (0);
}

char	**ft_split(char const*s, char c)
{
	int		wordcount;
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	wordcount = ft_wordcount((char *)s, c);
	res = (char**)malloc((wordcount + 1) * sizeof(char*));
	if(res)
	{
		while (wordcount--)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
			res[j] = ft_substr((char *)s, 0, ft_wordstrlen((char *)s, c));
			if (!res[j])
				return (ft_free(res, j));
			s = s + ft_wordcount((char *)s, c);
			j++;
		}
	}
	res[j] = '\0';
	return (res);
}