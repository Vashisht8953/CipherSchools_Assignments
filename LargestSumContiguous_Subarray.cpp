#include<iostream>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
	int max_ending_here = arr[0];
	int current_max = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		current_max = max(arr[i], current_max + arr[i]);
		max_ending_here = max(max_ending_here, current_max);
	}
	return max_ending_here;
} 
 
 int main()
 {
 	int arr[] = {-2, -3, 2, -1, -2, 1, 9, -3};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	
 	cout << maxSubArraySum(arr, n);
 	
 	return 0;
 }
