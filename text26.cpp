#include<stdio.h>
#include<math.h>
double areaoftriangle(double a, double b, double c)
{
	double p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
int isture(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	return 0;
}
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(isture(a,b,c)== 0)
	{
		printf("not found\n");
		return 0;
	}
	double s;
	s = areaoftriangle(a, b, c);
	printf("Ãæ»ıÎª%f", s);
	return 0;
}