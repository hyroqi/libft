int	ft_isprint(char c)
{
	if(c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}