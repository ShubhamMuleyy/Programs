#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt = 0,iSum = 0,iSum1 = 0;
	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iSum = iSum + Arr[iCnt];
		}
		else
		{
			iSum1 = iSum1 + Arr[iCnt]; 
		}
	}

	return (iSum - iSum1);
}

int main()
{
	int iCnt = 0,iRet = 0;
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

	printf("Display the numbers\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		printf("%d\n",ptr[iCnt]);		
	}

	iRet = Difference(ptr,iSize);
	printf("Summation of even and odd  is %d",iRet);

	free(ptr);
	
	return 0;

}