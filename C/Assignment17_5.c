#include<stdio.h>
#include<stdlib.h>

void Display(int iLength)
{
	int iCnt = 0;
	int iDigit = 0;
	
	while(iLength > 0)
	{
		iDigit = iLength % 10;
		iLength = iLength / 10;
		iCnt++;

		if(iCnt == 3)
		{
		printf("The number contain %d \n",iLength);
	
		}
	}
	
}

int main()
{
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	Display(iValue);
	
	return 0;
}