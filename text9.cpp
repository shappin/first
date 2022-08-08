#include <stdio.h>
int main()
{
	unsigned long long ll = 18446744073709551615;
	printf("%hhu\n", ll);
	printf("%hu\n", ll);
	printf("%u\n", ll);
	printf("%lu\n", ll);
	printf("%llu\n", ll);
	return 0;
}