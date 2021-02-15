#include<bits/stdc++.h>
using namespace std;

void  findMajorityElement(int arr[], int n)
{
	int maxElement = 0;
	int index = -1;
	for(int i=0; i<n; i++)
	{
		int count = 0;
		for(int j=0; j<n; j++)
		{
			if(arr[i] == arr[j])
			   count++;	
		}
		
		if( count > maxElement)
		{
			maxElement = count;
			index = i;
		}
	}
	
	if (maxElement > n / 2)
	{
		cout << arr[index] << endl;
	}
	else
	   cout << " No Majority Element found "<< endl;
}

int main()
{
	int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
	findMajorityElement(arr, n);
	return 0;
}
