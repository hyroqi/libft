#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	ds = (unsigned char*)dest;
	sr = (unsigned char*)src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return(dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sc;

	ds = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	if (sc < ds)
		while (n--)
			ds[n] = sc[n];
	else
		ft_memcpy(ds, sc, n);
	return (dest);
}

int	main(void)
{
	char a[69] = "Fuckpat";
	char b[69] = "bbong";


	printf("Function XX  : %s\n", a);
	ft_memmove(a + 4, b, 5 * sizeof(char));
	printf("Function ZZ  : %s\n", a);

	return (0);

}
