#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};

void RemoveLoop(struct Node*, struct Node*);

int DetectAndRemoveLoop(struct Node* list)
{
	struct Node *slow_ptr = list, *fast_ptr = list;

	while (slow_ptr && fast_ptr && fast_ptr->next) 
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		
		if (slow_ptr == fast_ptr) 
		{
			RemoveLoop(slow_ptr, list);
			
			return 1;
		}
	}

	return 0;
}

void RemoveLoop(struct Node* loop_node, struct Node* head)
{
	struct Node* ptr1;
	struct Node* ptr2;
	ptr1 = head;
	while (1) 
	{
		ptr2 = loop_node;
		while (ptr2->next != loop_node && ptr2->next != ptr1)
			   ptr2 = ptr2->next;

		    	if (ptr2->next == ptr1)
			     break;
		ptr1 = ptr1->next;
	}
	
	ptr2->next = NULL;
}

void printList(struct Node* node)
{
	while (node != NULL)
	 {
		cout << node->data << " ";
		node = node->next;
	}
}

struct Node* newNode(int key)
{
	struct Node* temp = new Node();
	temp->data = key;
	temp->next = NULL;
	return temp;
}

int main()
{
	struct Node* head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);

	head->next->next->next->next->next = head->next->next;

	DetectAndRemoveLoop(head);

	cout << "Linked List after removing loop : ";

	printList(head);

	return 0;
}

