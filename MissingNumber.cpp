#include<bits/stdc++.h>
using namespace std;

int MissingElement(int arr[], int n)
{
	int TotalSum = n * (n + 1) / 2;
	int SumWithoutMissingNumber = 0;
	
	for(int i = 0; i < n - 1; i++)
	    SumWithoutMissingNumber  = SumWithoutMissingNumber + arr[i];
	return TotalSum - SumWithoutMissingNumber;
}

int main()
{
	int arr[] = { 1, 2, 4, 6, 3, 7, 8};
	int n = sizeof(arr)/sizeof(arr[0]) + 1;
	
	cout << MissingElement(arr, n);
	
	return 0;
}
