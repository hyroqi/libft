#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;

	len = ft_intlen(n);
	itoa = (char *)malloc((len + 1) * sizeof(char));
	if (!itoa)
		return (0);
	if (n == 0 && len == 1)
		itoa[0] = '0';
	if (n < 0)
		itoa[0] = '-';
	itoa[len] = '\0';
	while (n != 0 && len >= 0)
	{
		itoa[len-- - 1] = abs(n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}
