#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	newn -> data = no;
	newn -> next = NULL;

	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
}


void Display(PNODE First)
{
	printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


int Small(iNo)
{
	int iDigit = 0;
	int SDigit = 9;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if(SDigit > iDigit)
		{
			SDigit = iDigit;
		}
		iNo = iNo / 10;
	}
	return SDigit;
}


void DisplaySmall(PNODE First)
{
	int iRet = 0;
	
	while(First != NULL)
	{
		iRet = Small(First -> data);
		
		printf("%d is the Smallest number in digit\n",iRet);
		
		First = First -> next;
	}
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,10);
	InsertLast(&Head,120);
	InsertLast(&Head,3321);
	InsertLast(&Head,4141);
	InsertLast(&Head,6);
	InsertLast(&Head,111);

	Display(Head);

	DisplaySmall(Head);
	
	return 0;
}