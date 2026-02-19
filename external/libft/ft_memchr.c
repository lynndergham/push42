
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	val = (unsigned char) c;
	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p[i] == val)
		{
			return (p + i);
		}
		i++;
	}
	return (0);
}
