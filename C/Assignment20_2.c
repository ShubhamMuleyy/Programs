#include<stdio.h>


void Display(int No1,int No2)
{
	char ch = 'A';	
	char ch1 = 'a';
	int iCnt = 0,iCnt1 = 0;

	for(iCnt = 1;iCnt <= No1;iCnt++)
	{
		for(iCnt1 = 1,ch = 'A';iCnt1 <= No2;iCnt1++,ch++)
		{
			if(iCnt % 2 == 0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",ch1);
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