#include<stdio.h>

void DisplayFactor(int iNo)
{
	int iCnt = 0;

	for(iCnt = 2;iCnt <= (iNo/2);iCnt+=2)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\n",iCnt);
		}

	}


}


int main()
{
	int iValue = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayFactor(iValue);

	return 0;
}