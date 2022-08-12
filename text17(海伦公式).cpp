#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	float b;
	float c;
	float sum;
	float p;
	while (1)
	{
		scanf("%f%f%f", &a, &b, &c);
		if (a + b <= c)
		{
			printf("fault");
			break;
		}
		else
		p = (a + b + c) / 2;
		sum = p * (p - a) * (p - b) * (p - c);
		printf("½á¹ûÎª%f", sqrt(sum));
	}

	return 0;

}