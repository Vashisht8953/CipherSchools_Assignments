#include<iostream>
using namespace std;

int FactorialUsingTailRecursion(int n, int fact)
{
	if( n == 0)
	   return fact;
	
	return FactorialUsingTailRecursion(n-1, n*fact);
}

int factorial(int n)
{
	return FactorialUsingTailRecursion(n, 1);
}

int main()
{
	cout << factorial(5);
	return 0;
}
