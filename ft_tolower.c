#include "libft.h"

char	ft_tolower(int c)
{
	char	a;

	a = c;
	if (a >= 'A' && a <= 'Z')
		return (a + ' ');
	else
		return (a);
}
