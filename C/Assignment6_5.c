#include<stdio.h>


float Percentage(float iNo1,float iNo2)
{
	int iSum = 0;

	if(iNo1 == 0)
	{
		iNo1 = 1;
	}
	else if(iNo2 == 0)
	{
		iNo2 = 1;
	}

	iSum = (iNo2/iNo1)*100;

	return iSum;
}


int main()
{
	float iValue1 = 0;
	float iValue2 = 0;

	float fRet = 0;

	printf("Enter the total marks\n");
	scanf("%f",&iValue1);

	printf("Enter marks obtain\n");
	scanf("%f",&iValue2);

	fRet = Percentage(iValue1,iValue2);
	printf("Percentage is %f:",fRet);

	return 0;
}