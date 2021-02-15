#include<bits/stdc++.h>
using namespace std;

void Merege2SortedArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	
	while(i < n1 && j < n2)
	{
		if(arr1[i] < arr2[j])
		    arr3[k++] = arr1[i++];
		else
		    arr3[k++] = arr2[j++];
	}
	
	while(i < n1)
	{
		arr3[k++] = arr1[i++];
		
	}
	while(j < n2)
	{
		arr3[k++] = arr2[j++];
	}
}

void print(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
	for(int i=0; i<n1+n2; i++)
	     cout << arr3[i] << " ";
}

int main()
{
	int arr1[] = {5, 8, 9};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	
	int arr2[] = {4, 7, 8};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int arr3[n1+n2];
	
	Merege2SortedArrays(arr1, arr2, n1, n2, arr3);
	
	print(arr1, arr2, n1, n2, arr3);
	
	return 0;
}
