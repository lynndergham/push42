
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (0);
	i = 0;
	while (i < size)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
