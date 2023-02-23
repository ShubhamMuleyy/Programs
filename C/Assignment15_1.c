#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	int iCnt = 0;
	int iCount = 0;
	printf("Frequency of even is :");
	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
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

	iRet = CountEven(ptr,iSize);
	printf("Number of even count is : %d",iRet)

	free(ptr);
	
	return 0;

}