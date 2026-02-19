
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	val;

	val = (unsigned char) c;
	while (*s != val)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}
