//求圆的面积

#include<stdio.h>
#define P (3.14)
int main(int argc, const char *argv[])
{
	
	float a,area,l;
	scanf("%f",&a);
	l=2*P*a;
	area=P*a*a;

	printf("周长为:%f\n面积为:%f\n",l,area);

	return 0;
}
