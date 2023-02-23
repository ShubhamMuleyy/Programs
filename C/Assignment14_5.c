#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt = 0,iSum = 0,iSum1 = 0;
	printf("Elements which are divisble by 3 and 5 is :\n");
	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % 11 == 0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}

	
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

	Display(ptr,iSize);

	free(ptr);
	
	return 0;

}