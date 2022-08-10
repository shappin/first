#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a < 2)
		printf("left\n");
	else if (a >= 2 && a <= 10)
		printf("In\n");
	else
		printf("Right\n");
}