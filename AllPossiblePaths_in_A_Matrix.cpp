#include<iostream>
using namespace std;

int TotalPossiblePaths(int n, int r)
{
	int path = 1;
	for(int i = r; i < (n + r - 1); i++)
	{
		path *= i;
		path /= (i - r + 1);
	}
	return path;
}
int main()
{
	cout << TotalPossiblePaths(2, 3);
}
