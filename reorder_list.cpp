#include<bits/stdc++.h> 
using namespace std; 
   
struct Node 
{ 
    char data; 
    struct Node *next; 
}; 
  
Node* newNode(char key) 
{ 
    Node *temp = new Node; 
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 
  
void reverselist(Node **head) 
{ 
    Node *prev = NULL, *curr = *head, *next; 
  
    while (curr) 
    { 
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    } 
  
    *head = prev; 
} 
  
void printlist(Node *head) 
{ 
    cout<<"| ";
    while (head != NULL) 
    { 
        cout << head->data << " "; 
        if(head->next) cout << "| ---> | "; 
        head = head->next; 
    } 
    cout << "|" << endl; 
}

void reorder(Node **head) 
{ 
    Node *p1 = *head, *p2 = p1->next; 
    while (p2 && p2->next) 
    { 
        p1 = p1->next; 
        p2 = p2->next->next; 
    } 
  
  
    Node *head1 = *head; 
    Node *head2 = p1->next; 
    p1->next = NULL; 
    reverselist(&head2); 
 
    *head = newNode(0);  
    Node *curr = *head; 

    while (head1 != NULL || head2 != NULL) 
    { 
        if (head1 != NULL) 
        { 
            curr->next = head1; 
            curr = curr->next; 
            head1 = head1->next; 
        } 
  
        if (head2 != NULL) 
        { 
            curr->next = head2; 
            curr = curr->next; 
            head2 = head2->next; 
        } 
    } 

    *head = (*head)->next; 
} 

int main() 
{ 
    Node *head = newNode('A'); 
    head->next = newNode('B'); 
    head->next->next = newNode('C'); 
    head->next->next->next = newNode('D'); 
    head->next->next->next->next = newNode('E');
    head->next->next->next->next->next = newNode('F');
    head->next->next->next->next->next->next = newNode('G'); 
  
    printlist(head);
    reorder(&head);
    printlist(head);
} 