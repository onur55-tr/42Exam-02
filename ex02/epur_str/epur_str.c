#include <unistd.h>

void	epur_str(char *s){
	while (*s == 32 || *s == '\t')
		s++;
	while (*s) {
		if (*s == 32 || *s == '\t') {
			if (*(s + 1) > 32 && *(s + 1))
				write(1, " ", 1);
		}
		else if (*s != 32 && *s != '\t')
				write(1, &*s, 1);
		s++;
	}
}

int main(int ac, char **av) {
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
}
