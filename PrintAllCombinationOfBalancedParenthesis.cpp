#include<iostream>
#define MAX_SIZE 100
using namespace std;

void printAllParenthesis(int position, int n, int start, int end);

void AllParenthesis(int n)
{
	if(n > 0)
	   printAllParenthesis(0, n, 0, 0);
	return ;
}

void printAllParenthesis(int position, int n, int start, int end)
{
	static char str[MAX_SIZE];
	
	if(end == n)
	{
		cout << str << endl;
		return ;
	}
	
	else
	{
		if(start > end)
		{
			str[position] = '}';
			printAllParenthesis(position + 1, n, start, end + 1);
			
		}
		
		if(start < n)
		{
			str[position] = '{';
			printAllParenthesis(position + 1, n, start + 1, end);
		}
	}
}

int main()
{
	int n = 3;
	AllParenthesis(n);
	getchar();
	return 0;
}
