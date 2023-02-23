#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt = 0;
	int iCount = 0;
	int iCount1 = 0;

	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iCount++;
		}
		else
		{
			iCount1++;
		}
	}
	return (iCount-iCount1);
	
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

	iRet = Frequency(ptr,iSize);
	printf("Difference of frequency in even and odd is : %d",iRet);

	free(ptr);
	
	return 0;

}