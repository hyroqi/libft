#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*finalstr;

	i = 0;
	j = 0;
	finalstr = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) * sizeof(char)));
	printf("%d\n",(ft_strlen(s1) + ft_strlen(s2)));
	if (!finalstr)
		return (0);
	while (s1[i] != '\0')
	{
		finalstr[i] = s1[j];
		i++;
		j++;
	}
	printf("1 done\n");
	j = 0;
	while (s2[j] != '\0')
	{
		finalstr[i] = s2[j];
		i++;
		j++;
	}
	printf("2done\n");
	return (finalstr);
}

int	main(void)
{
	char a[69] = "Fuckpat";
	char b[69] = "Fuckzec";
	int c;
	int d;

	printf("Function XX  : %s\n", ft_strjoin(a, b));

	return (0);

}
