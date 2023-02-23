#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
	int iCnt = 0;
	int iSum = 1;
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iSum = iSum * Arr[iCnt];
		}
	}
	return iSum;
	
}

int main()
{
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	int iSize = 0;
	int iNo = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

		
	iRet = Product(ptr,iSize);
	
	printf(" The product is : %d",iRet);
	
	free(ptr);
	
	return 0;
}