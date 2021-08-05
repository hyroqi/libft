#include "libft.h"

int	ft_isalpha(int c)
{
	char	a;

	a = c;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}
