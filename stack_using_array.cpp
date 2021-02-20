#include<bits/stdc++.h>
#include<iostream>
# define MAX 1000

using namespace std;

class Stack
{
	int top;
public:
		int arr[MAX];
		
		Stack() 
		{
			top = -1;
		}
		bool push(int x);
		int pop();
		int peek();
		bool isEmpty();		
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1))
	{
		cout << " Stack Overflow ";
		return false;
	}
	else 
	{
		arr[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0)
	{
		cout << "Stack Underflow ";
		return 0;
	}
	else
	{
		int x = arr[top--];
		return x;
	}
}

int Stack::peek()
{
		if (top < 0)
	{
		cout << "Stack is Empty ";
		return 0;
	}
	else
	{
		int x = arr[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

int main()
{
	class Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.pop() << " Popped from stack\n";
	return 0;
}
