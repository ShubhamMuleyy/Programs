#include<stdio.h>
#include<stdbool.h>

int StrRevX(char *str,char ch)
{
	char *start = str;
	char *end = str;
	char temp = '\0';
	int iCnt1 = 0;
	int iCnt2 = 0;
	
	while(*end != '\0')
	{
		iCnt1++;
		end++;
	}
	end--;

	while(start <= end)
	{
		while(*str != '\0')
			if(*str == ch)
			{
				break;
			}
			iCnt2++;
			end--;
	}
	return(iCnt1 - iCnt2);

	
}


int main()
{
	char arr[20];
	char cValue = '\0';
	int iRet = 0;

	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

	printf("Enter the character\n");
	scanf(" %c",&cValue);

	iRet = StrRevX(arr,cValue);

	printf("Reverse atring is :%s\n",arr);

	return 0;
}