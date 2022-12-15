int		max(int* tab, unsigned int len) {
	int	tmp;

	tmp = tab[0];
	while (len - 1) {
		if (tmp < *tab)
			tmp = *tab;
		len--;
		tab++;
	}
	return (tmp);
}
/*#include <stdio.h>
int	main(void) {
	int tab[6] = {1, 6, 7, 5, 9, 10};
	printf("%d\n", max(tab, 5));
}*/
