//使用循环测量字符串长度
#include<stdio.h>
int main()
{
	char str[] = "hello world";
	int a = 0;
	while (str[a] != '\0')
	{
		a++;

	}
	printf("%d", a);
	return 0;

}