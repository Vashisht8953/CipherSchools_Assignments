#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* newNode(int data)
{
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = newNode(new_data);
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

Node* addTwoLists(Node* first, Node* second)
{
	Node* result = NULL;
	Node *temp, *prev = NULL;
	int carry = 0, sum;

	while (first != NULL || second != NULL) 
	{
		sum = carry + (first ? first->data : 0)	+ (second ? second->data : 0);
		carry = (sum >= 10) ? 1 : 0;
		sum = sum % 10;
		temp = newNode(sum);

		if (result == NULL)
			result = temp;

		else
			prev->next = temp;

		prev = temp;

	
		if (first)
			first = first->next;
		if (second)
			second = second->next;
	}

	if (carry > 0)
		temp->next = newNode(carry);

	return result;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

int main(void)
{
	Node* result = NULL;
	Node* first = NULL;
	Node* second = NULL;

	push(&first, 6);
	push(&first, 4);
	push(&first, 9);
	push(&first, 5);
	push(&first, 7);
	printf("Enter First Linked List : ");
	printList(first);

	push(&second, 4);
	push(&second, 8);
	cout << "Enter Second Linked List is : ";
	printList(second);

	result = addTwoLists(first, second);
	cout << "Sum of Both Given  Linked List is : ";
	printList(result);

	return 0;
}


