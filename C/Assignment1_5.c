#include<stdio.h>

void Accept(int iNo)
{
	int iCnt = 0;

	for(iCnt = 0;iCnt < iNo;iCnt++)
	{
		printf("*\n");
	}	

}

int main()
{
	int iValue = 0;

	printf("ENter the number\n");
	scanf("%d",&iValue);

	Accept(iValue);

	return 0;
}