#include<bits/stdc++.h>
using namespace std;

int MaximumProfit(int arr[], int first, int last)
{
	if (last < first)
	    return 0;
	    
	int profit  = 0;
	
	for(int i = first; i < last; i++) 
	{
		for(int j = i + 1; j <= last; j++)
		{
			if(arr[j] > arr[i])
			{
				int current_profit = arr[j] - arr[i] + MaximumProfit(arr, first, i - 1) + MaximumProfit(arr, j + 1, last);
				
				profit = max(profit, current_profit);
			}
		}
	}
	return profit;
}

int main()
{
	int arr[] = {100, 180, 260, 310, 40, 535, 695 };
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << MaximumProfit(arr, 0, n - 1);
	
	return 0;
}
