#include "libft.h"

int	ft_isalnum(int c)
{
	char	a;

	a = c;
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
