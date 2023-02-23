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


bool Pallindrome(iNo)
{
	int iDigit = 0;
	int iReverse = 0;
	bool bFlag  = false;
	int iTemp = iNo;

	while(iTemp != 0)
	{
		iDigit = iTemp % 10;
		iReverse = iReverse * 10 + iDigit;
		iTemp = iTemp / 10;
	}

	if(iNo == iReverse)
	{
		return bFlag = true;
	}
	else
	{
		return bFlag = false;
	}

}


void DisplayPallindrome(PNODE First)
{
	int iRet = 0;
	
	while(First != NULL)
	{
		iRet = Pallindrome(First -> data);
		if(iRet == true)
		{
			printf("%d is a Pallindrome number :\n",First -> data);
		}
		else
		{
			printf("%d is not a Pallindrome number :\n",First -> data);
		}
		First = First -> next;
	}
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,11);
	InsertLast(&Head,121);
	InsertLast(&Head,3321);
	InsertLast(&Head,4141);
	InsertLast(&Head,6);
	InsertLast(&Head,111);

	Display(Head);

	DisplayPallindrome(Head);
	
	return 0;
}