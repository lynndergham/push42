
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *) s;
	val = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		p[i] = val;
		i++;
	}
	return (s);
}
