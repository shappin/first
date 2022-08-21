#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "abcdefg";
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = str[i] - 32;
	}
	printf(str);
}