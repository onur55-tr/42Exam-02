#include <unistd.h>

int check_doubles(char *s, char c, int pos)
{
	int i;

	i = -1;
	while (++i < pos)
		if (s[i] == c)
			return 1;
	return 0;
}

void ft_union(char *s1, char *s2) {
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = -1;
	while (s2[++j])
		s1[i++] = s2[j];
	j = -1;
	while (++j < i - 1)
		if (!check_doubles(s1, s1[j], j))
			write(1, &s1[j], 1);
}

int main(int ac, char **av){
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
