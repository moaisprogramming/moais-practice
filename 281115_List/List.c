#include "List.h"
#include <stdio.h>
#include <malloc.h>
	
ListNode* createNode(int data)
{
	ListNode* p = 
		(ListNode*)malloc(sizeof(ListNode));
	p->integer = data;
	p->next = NULL;
	return p;
}

int addnode(ListNode** pfirst, int pos, int data)
{
	int i;
	ListNode* q;
	ListNode* nq;
	q = *pfirst;
	if (pos == 0)
	{
		nq = createNode(data);
		nq->next = q;
		*pfirst = nq;
	}
	else
	{
		if (q == NULL)
		{
			return 0;
		}
		for (i = 0; i < pos; i++)
		{
			if (q->next != NULL)
			{
				q = q->next;
			}
			else
			{
				if(pos - i > 1)
				{
					return 0;
				}
				
			}
		}
		nq = createNode(data);
		nq->next = q->next;
		q->next = nq;
	}
	return 1;
}

void printList(ListNode* pfirst)
{
	while (pfirst != NULL)
	{
		printf("%d ", pfirst -> integer);
		pfirst = pfirst->next;
	}
	printf("\n");
}

void printNode(ListNode* node)
{
	if (node == NULL)
	{
		printf("error");
	}
	else
	{
		printf("%d ", node->integer);
	}
	printf("\n");
}

ListNode* findNode(ListNode* t, int data)
{
	while (t != NULL)
	{
		if (t->integer == data)
		{
			return t;
		}
		
		t = t->next;

	}
	return NULL;
}
