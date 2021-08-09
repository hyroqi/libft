#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_memcmp (const void*s1, const void *s2, size_t n)
{
	int	i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = ((unsigned char*)s1);
	str2 = ((unsigned char*)s2);
	while (str1[i] == str2[i] && i < n && str1[i] != '\0')
		i++;
	if (str1[i] == str2[i])
		return (0);
	else
		return (str1[i] - str2[i]);
}

int	main(void)
{
	char a[69] = "Fuckpat";
	char b[69] = "Fuckpbt";
	int c;
	int d;

	printf("Function XX  : %d\n", ft_memcmp(a, b, 7));
	printf("Function ZZ  : %d\n", memcmp(a, b, 7));

	c = memcmp(a, b, 7);
	d = ft_memcmp(a, b, 7);

	printf("Main Function after %d\n", c);
	printf("My Function after %d\n", d);

	return (0);

}
