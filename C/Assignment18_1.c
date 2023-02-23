#include<stdio.h>

void Pattern(int iNo)
{
	char ch = 'A';

	for(int iCnt = 0; iCnt < iNo;iCnt++)
	{
		printf("%c\n",ch);
		ch++;
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number of elements");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;

}