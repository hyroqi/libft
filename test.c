/*#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

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

int	main(void)
{
	char a[69] = "pat Fuck pat";
	char b[69] = "pat";
	int	c = 6999;
	c++;

	printf("Function XX  : %d\n", c);

	return (0);

}
*/