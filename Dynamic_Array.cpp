#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of elements "<< endl;
	cin>>n;
	
	int *arr = new int(n);
	cout << "Enter "<< n << " Elements :";
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Numbers you entered are : " ;
	for(int i=0; i < n; i++)
	{
		 cout << arr[i] << " ";
	}
	return 0;	
}
