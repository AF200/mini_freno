#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	i = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(*dup) * i);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, i);
	return (dup);
}
