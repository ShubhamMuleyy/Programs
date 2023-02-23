#include<stdio.h>

double SquareMeter(int iValue)
{
	double Area = 0.0;

	Area = iValue * 0.0929;

	return Area;

}


int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter area in square feet\n");
	scanf("%f",&fValue);

	dRet = SquareMeter(fValue);

	printf("%lf",dRet);

	return 0;
}