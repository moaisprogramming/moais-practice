#include<stdio.h>
#include "List.h" 

int main()
{
	ListNode* first = NULL;
	ListNode* w = NULL;
	int i;
	//first = createNode(1);
	for (i = 0; i < 5; i++)
	{
		addnode(&first, i, i+1);	
	}
	printList(first);
	addnode(&first, 2, 10);
	printList(first);
	addnode(&first, 0, -1);
	printList(first);
	w = findNode(first,9);
	printNode(w);
	
	
    return 0;
}

