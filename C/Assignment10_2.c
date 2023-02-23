#include<stdio.h>


double RectArea(float fWidth,float fHeight)
{
	double Area = 0.0;

	Area = fWidth * fHeight;

	return Area;
}


int main()
{
	float fValue = 0.0,fValue1 = 0.0;
	double dRet = 0.0;

	printf("Enter the width\n");
	scanf("%f",&fValue);

	printf("Enter the height\n");
	scanf("%f",&fValue1);

	dRet = RectArea(fValue,fValue1);

	printf("%lf\n",dRet);

	return 0;
}