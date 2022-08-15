#include<stdio.h>
int main()
{
	int a[10];
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		a[i] = n;
		n = n + 2;
	}
	for (int i = 0; i < 10; i++)
		printf("%d", a[i]);

}