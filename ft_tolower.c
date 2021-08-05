#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	else
		return (c);
}
