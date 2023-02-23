#include<stdio.h>

int Whitespace(char str[])
{
	static int icnt = 0;

	if(*str != '\0')
	{
		if(*str == ' ')
		{
			icnt++;
		}
		str++;
		Whitespace(str);
	}
	return icnt;
}





int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

	iRet = Whitespace(arr);
	
	printf("Whitespcaes are %d:",iRet);

	return 0;

}