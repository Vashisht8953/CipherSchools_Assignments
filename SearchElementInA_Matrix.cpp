#include<bits/stdc++.h>
using namespace std;

int searchElement(int mat[5][5], int n, int x)
{
	if(n == 0)
	   return -1;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(mat[i][j] == x)
			{
				cout << "Element found at ( "<< i << ", "<< j << ") \n ";
				return 1;
			}
		}
	}
	cout << "Element not found in Matrix ";
	return 0;
}
int main()
{
	int mat[5][5] = { {10, 20, 30, 40, 50 },
	                  {15, 25, 35, 45, 55 },
					  {27, 29, 37, 48, 65 },
					  {32, 33, 39, 50, 75 },
					  {42, 43, 47, 52, 85 } };
					
	searchElement(mat, 4, 50);
	return 0;
}
