/*
char *ft_strcpy(char *s1, char *s2)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (s2[++i])
		s1[j++] = s2[i];
	s1[j] = '\0';
	return (s1);
}

char *ft_strrev(char *str) {
	int		i;
	char	*s;
	int		len;
	int		tmp;

	i = -1;
	len = 0;
	ft_strcpy(s, str);
	while (s[len])
		len++;
	while (++i < len / 2) {
		tmp = s[i];
		s[i] = s[len -i -1];
		s[len -i -1] = tmp;
	}
	return (str);
}
*/

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	while (str[len])
		len++;
	i = 0;
	len--;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
