#include<stdio.h>


void Display(int No1,int No2)
{
	int iCnt = 0,iCnt1 = 0;

	for(iCnt = 1;iCnt <= No1;iCnt++)
	{
		for(iCnt1 = 1;iCnt1 <= No2;iCnt1++)
		{
			if(iCnt < iCnt1)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}

}


int main()
{
	int iValue1 = 0,iValue2 = 0;

	printf("Enter number of row and columns ");
	scanf("%d %d",&iValue1,&iValue2);

	Display(iValue1,iValue2);

	return 0;


}