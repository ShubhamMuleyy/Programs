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

bool Prime(int ino)
{
	int i = 0,Sum = 0;
	bool bFlag = true;
	for(i = 2;i < ino;i++)
	{
		if(ino % i == 0)
		{
			bFlag = false;
			break;
		}
	}
	if(bFlag == true)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void DisplayPerfect(PNODE First)
{
	bool iRet = 0;

	while(First != NULL)
	{
		iRet = Prime(First -> data);
		if(iRet == true)
		{
			printf("%d is a prime number\n",First -> data);
		}
		else
		{
			printf("%d is not a prime number\n",First -> data);
		}
		
		First = First -> next;
	}
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,28);
	InsertLast(&Head,17);
	InsertLast(&Head,41);

	Display(Head);

	DisplayPerfect(Head);
	
	return 0;
}