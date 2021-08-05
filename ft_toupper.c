#include "libft.h"

char	ft_toupper(int c)
{
	char	a;

	a = c;
	if (a >= 'a' && a <= 'z')
		return (a - ' ');
	else
		return (a);
}
