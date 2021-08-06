#include "libft.h"

int	ft_isascii(int c)
{
	char	a;

	a = c;
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}
