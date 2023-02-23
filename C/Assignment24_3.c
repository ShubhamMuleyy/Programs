#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
		if(ch >= 'A' && ch <= 'Z')
		{
			while(ch != 'Z')
			{
				printf("%d\t",ch);
				ch++;
			}	
		}
		else
		{
			printf("%d",ch);
		}
		
}



int main()
{
	char cValue = '\0';
	

	printf("Enter the charcter\n");
	scanf("%c",&cValue);

	Display(cValue);

	

	return 0;
}