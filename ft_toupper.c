#include "libft.h"

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	else
		return (c);
}
