#include<stdio.h>


double CircleArea(float fRadius)
{
	double PI = 3.14;
	double Area = 0.0;

	Area = PI * fRadius * fRadius;

	return Area;
}


int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter the radius\n");
	scanf("%f",&fValue);

	dRet = CircleArea(fValue);

	printf("%lf\n",dRet);

	return 0;
}