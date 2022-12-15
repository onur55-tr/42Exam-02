#include <unistd.h>

int ft_strlen(char *s){
	int i;

	i = 0;
	while (s[i])
		i++;
	return i;
}

void wdmatch(char *s1, char *s2) {
	int wd;
	int i;
	int j;

	i = -1;
	j = -1;
	wd = 0;
	while (s1[++i])
		while (s2[++j])
			if (s1[i] == s2[j])
			{
				wd++;
				break;
			}
	if (wd == ft_strlen(s1))
		while (*s1)
			write(1, &*s1++, 1);
}

int main(int ac, char **av){
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}