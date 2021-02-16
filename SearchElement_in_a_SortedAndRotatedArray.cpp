#include<bits/stdc++.h>
using namespace std;

int SearchElement(int arr[], int low, int high, int key)
{
	if(low > high)
	   return -1;
	
	int mid = (low + high) / 2;
	
	if(arr[mid] == key)
	    return mid;
	
	if(arr[low] <= arr[mid])
	{
		if (key >= arr[low] && key <= arr[mid])
		   return SearchElement(arr, low, mid - 1, key);
		
		return SearchElement(arr, mid + 1, high, key);
	}
	
	if( key >= arr[mid] && key <= arr[high])
	    return SearchElement(arr, mid + 1, high, key);
	
	SearchElement(arr, low, mid - 1, key);
}

int main()
{
	int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 3;
	int i = SearchElement(arr, 0, n - 1, key);
	
	if( i != -1)
	    cout << " Element is found at Index: " << i << endl;
	
	else
	    cout << "Key Not Found ";
	
	return 0;
}
