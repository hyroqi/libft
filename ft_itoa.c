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
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0 && len == 1)
		return (ft_strdup("0"));
	itoa = (char *)malloc((len + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	itoa[len] = '\0';
	while (n != 0 && len >= 0)
	{
		itoa[len-- - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}
