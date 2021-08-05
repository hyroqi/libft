#include "libft.h"

int	ft_isprint(int c)
{
	char	a;

	a = c;
	if (a >= ' ' && a <= '~')
		return (1);
	else
		return (0);
}
