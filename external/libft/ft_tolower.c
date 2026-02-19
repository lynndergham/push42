
static int	ft_isuppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isuppercase(c))
	{
		return (c + 32);
	}
	return (c);
}
