#include<bits/stdc++.h>
using namespace std;

int PeakValue(int arr[], int n)
{
	if(n == 1 )
	   return arr[0];
	
	if(arr[0] >= arr[1])
	    return 0;
	
	if(arr[n - 1] >= arr[n - 2])
	    return n -1 ;
	    
	for(int i=0; i<n-1; i++)
	{
		if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
		   return arr[i];
	}
	
}

int main()
{
	int arr[] = {10, 90, 15, 25, 16, 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<< "  Index of Peak Value is "<<PeakValue(arr, n);

	return 0;
}
