int	ft_isalpha(char c)
{
	if ((c >= 'A' && 'Z') || (c >= 'a' &&  'z'))
		return (1);
	else
		return (0);
}
