#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	static char ch = 'a';
	if(iCnt < iNo)
	{
		printf("%c\t*\t",ch);
		iCnt++;
		ch++;
		Display(iNo);
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