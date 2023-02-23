#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
	int iCnt = 0;

	printf("The range number is :");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(iNo1 < Arr[iCnt] < iNo2)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
	
}


int main()
{
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	int iSize = 0;
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the second number\n");
	scanf("%d",&iValue2);

	Range(ptr,iSize,iValue1,iValue2);

	return 0;	

}