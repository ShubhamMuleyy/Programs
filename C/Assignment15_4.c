#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	int iCount = 0;

	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % iNo == 0)
		{
			iCount++;
		}
	}
	return iCount;
	
}

int main()
{
	int iCnt = 0,iRet = 0;
	int *ptr = NULL;
	int iSize = 0;
	int iValue = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the number you want to find\n");
	scanf("%d",&iValue);

	iRet = Frequency(ptr,iSize,iValue);
	printf("Frequency of %d is : %d",iValue,iRet);

	free(ptr);
	
	return 0;

}