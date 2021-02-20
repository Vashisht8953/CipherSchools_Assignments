#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<long long int> Queue)
{
	while (!Queue.empty())
	{
		cout << Queue.front() << " ";
		Queue.pop();
	}
}

void reverseQueue(queue<long long int>& q)
{
	if (q.empty())
	   return ;
	
	long long int data = q.front();
	q.pop();
	
	reverseQueue(q);
	
	q.push(data);
}

int main()
{
	queue<long long int> Queue;
	Queue.push(5);
	Queue.push(2);
	Queue.push(3);
	Queue.push(4);
	Queue.push(8);
	Queue.push(9);
	Queue.push(5);
	Queue.push(8);
	Queue.push(9);
	Queue.push(10);
	reverseQueue(Queue);
	printQueue(Queue);	
}
