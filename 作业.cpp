#include<string.h>
#include<stdio.h>
int main()
{
	char a[20] = "helloworld";
	int len1;
	len1 = strlen(a);
	printf("a=%d\n", len1);
	int len2;
	len2 = strlen("helloworld");
	printf("helloworld=%d\n", len2);
	printf("%d\n", sizeof(a));
	printf("%d", sizeof("helloworld"));
	return 0;
}