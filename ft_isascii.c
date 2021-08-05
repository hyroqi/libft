#include "libft.h"

int	ft_isascii(int c)
{
	char	a;

	a = c;
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
