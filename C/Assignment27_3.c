#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str,char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		iCnt++;
		str++;
	}
	return iCnt;
}


int main()
{
	char Arr[20];
	char cValue = '\0';
	int iRet = 0;

	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the character\n");
	scanf(" %c",&cValue);

	iRet = FirstChar(Arr,cValue);
	printf("Character location is %d:",iRet);

	return 0;

}