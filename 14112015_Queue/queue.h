struct node 
{
	int Data;
	struct node* Next;
};

typedef struct node Node;

void enqueue (Node* queue, int data);
Node* create_Node(int data);