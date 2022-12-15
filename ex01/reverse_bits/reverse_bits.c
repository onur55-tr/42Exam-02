unsigned char	reverse_bits(unsigned char octet) {
	int	i;
	unsigned int	bits;

	i = 8;
	while (--i) {
		bits = bits * 2 + (octet % 2);
		octet /= 2;
	}
	return bits;
}
