#include <stdio.h>
int main()
{
	int sum, i;
	sum = 0;
	i = 1;
	while (i <= 100)
	{
		sum = sum + i;
		i++;

	}
	printf("%d %d\n", sum, i);
}