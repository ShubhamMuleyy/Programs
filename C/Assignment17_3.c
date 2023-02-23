#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt = 0;
	int iSum = 0;
	int iMax = Arr[iCnt];
	int iMin = Arr[iCnt];
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}	
	}


	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}

	iSum = iMax - iMin	;

	return iSum;		
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
		
	iRet = Difference(ptr,iSize);

	printf("The difference is : %d",iRet);
	
	free(ptr);
	
	return 0;
}