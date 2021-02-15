#include<bits/stdc++.h>
using namespace std;

void findFirstAndLastOccurance(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for(int i = 0; i < n; i++)
	{
		if (x != arr[i])
		    continue;
	    if(first == -1)
	        first = i;
	    last = i;
	}
	if (first != -1)
	   cout << "First occurance "<< first <<" and Last Occurance "<< last;
	else
	   cout << "Not Found ";
}
int main()
{
	int arr[] ={ 1, 3, 5 ,5, 5, 5, 7, 123, 125};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 7;
	findFirstAndLastOccurance(arr, n, x);
	return 0;
}
