static int	ft_islowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isuppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islowercase(c) || ft_isuppercase(c));
}
