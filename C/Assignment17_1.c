#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iMax = Arr[iCnt];
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
		
}

int main()
{
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	int iSize = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
		
	iRet = Maximum(ptr,iSize);

	printf("The largest number is : %d",iRet);
	
	free(ptr);
	
	return 0;
}