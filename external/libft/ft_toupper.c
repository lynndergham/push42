
static int	ft_islowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islowercase(c))
	{
		return (c - 32);
	}
	return (c);
}
