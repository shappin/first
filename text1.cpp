#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int sub;
	sub = add(3, 4);
	printf("%d", sub);
	return 0;
}