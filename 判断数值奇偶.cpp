#include <stdio.h>
int main()
#define number 2
{
	int a;
	scanf("%d", &a);
	int total;
	total = a % number;
	printf("result=%d", total);
	return 0;
}