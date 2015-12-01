#include "queue.h"
#include <stdio.h>
#include <malloc.h>


void enqueue (Node* queue, int data)
{
	Node* last;
	last=queue;
	while (1)
	{
		if (last->Next==NULL) 
		{
			last->Next=create_Node(data);
			return;
		} 
		else 
		{
			last=last->Next;
		}
	}
}

Node* create_Node(int data)
{
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->Data=data;
	newNode->Next=NULL;
	return newNode;
}
