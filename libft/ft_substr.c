#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	s_len;

	if (!s)
		return (0);
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	s_len = ft_strlen(s);
	while (len--)
	{
		if (s[i] && start <= s_len)
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
