#include<stdio.h>

double FhtoCs(float fTemp)
{
	double Ans = 0.0;

	Ans = ((fTemp - 32) * (5/9));

	return Ans;
}


int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter temp in Fahrenheit\n");
	scanf("%f",&fValue);

	dRet = FhtoCs(fValue);

	printf("%lf",dRet);

	return 0;
}