
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	n;
	int				i;

	if (!s)
		return (0);
	n = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == n)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
