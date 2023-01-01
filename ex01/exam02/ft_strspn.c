#include <stdlib.h>

char *ft_strchr(char c, char *s) {
	while (*s)
		if (*s == c)
			return c;
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept) {
	size_t	i;

	i = -1;
	while(s[++i])
		if (!ft_strchr(s[i], accept))
			break ;
	return i;
}