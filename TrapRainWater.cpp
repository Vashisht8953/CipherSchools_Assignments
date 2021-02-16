#include<bits/stdc++.h>
using namespace std;

int TrapWater(int arr[], int n)
{
	int left[n], right[n], water = 0;
	
	//  fill from left 
	
	left[0] = arr[0];
	for(int i = 1; i < n; i++)
	    left[i] = max(left[i - 1], arr[i]);
	
	// fill  from right now 
	
	right[n - 1] = arr[ n - 1];
	for (int i = n - 2; i >= 0; i--)
	    right[i] = max(right[i + 1], arr[i]);
	    
	// for stored water
	
	for(int i = 0; i < n; i++)
	{
		water = water + min(left[i], right[i] )- arr[i];
	}
	
	return water;
}

int main()
{
	int arr[] = {3, 0, 2, 0, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout <<" The water we can store is "<< TrapWater(arr, n);
	 return 0;
}
