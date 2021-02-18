#include<iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{
	//Base Cases
	
	if(sum == 0)
	   return true;
	if(n == 0)
	   return false;
	   
	if (set[n - 1] > sum)
	   return isSubsetSum(set, n-1, sum);
	
	return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum - set[n-1]);
}

int main()
{
	int set[] = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
	    cout << "There exists a subset with given sum ";
	else
	    cout << "There  does not exist a subset with given sum ";
	return 0;
}
