#include <stdio.h>
int main()
{ 
	char c;
	short s;
	int n; 
	long l;
	float f;
	double df;
	scanf("%hhd %hd %d %ld %f %lf", &c, &s, &n, &l, &f, &df);
	printf("%d %d %d %d %f %f\n", c, s, n, l, f, df);
	return 0;
}