#include "libft.h"

int	ft_isdigit(int c)
{
	char	a;

	a = c;
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
