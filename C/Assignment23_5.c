#include<stdio.h>
#include<stdbool.h>

void DisplaySch(char ch)
{	

	if(ch == 'a' || ch =='A')
	{
		printf("Exam is division A at 7 AM");
	}
	else if(ch == 'b' || ch == 'B')
	{
		printf("Exam is division B at 8 : 30 AM");
	}
	else if(ch == 'c' || ch == 'C')
	{
		printf("Exam is division C at 9 : 20 AM");
	}
	else if(ch == 'd' || ch == 'D')
	{
		printf("Exam is division D at 10 : 30 AM");
	}

	
}



int main()
{
	char cValue = '\0';
	

	printf("Enter the charcter\n");
	scanf("%c",&cValue);

	 DisplaySch(cValue);

	

	return 0;
}