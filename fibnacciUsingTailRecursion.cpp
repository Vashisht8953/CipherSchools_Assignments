#include<iostream>
using namespace std;

int fibUsingTailRecursion(int n, int a = 0, int b = 1)
{
	if(n == 0)
	   return a;
	
	if (n == 1)
	   return b;
	
	return fibUsingTailRecursion(n - 1, b, a + b);
}

int main()
{
	int n = 9;
	cout << fibUsingTailRecursion(n) << endl;
	return 0;
}
