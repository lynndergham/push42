
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

char	*copy_word(char const *s, int start, int end)
{
	char	*p;
	int		i;

	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

static void	free_all(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill_word(char **arr, char const *s, char c, int j)
{
	int	word_beg;
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			word_beg = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = copy_word(s, word_beg, i);
			if (!arr[j])
				return (-1);
			j++;
		}
	}
	arr[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	if (fill_word(arr, s, c, 0) == -1)
	{
		free_all(arr, count_words(s, c));
		return (NULL);
	}
	return (arr);
}
