#include<iostream>
using namespace std;

# define R 4
# define C 4

void PrintSpiral(int arr[R][C], int i, int j, int m, int n)
{
	if(i > m && j >= n)
	    return ;
	    
	// for first Row
	
	for(int x = j; x < n; x++)
	   cout << arr[i][x] << " ";
	   
	// for last Column 
	
	for(int x = i + 1; x < m; x++)
	     cout << arr[x][n - 1] <<" ";
	     
	//for last Row
	
	if((m - 1) != i)
      	for (int x = n - 2; x >= j; x--)
      	     cout << arr[m - 1][x] << " ";
      	     
    //for First Column 
    
    if((n - 1) != j)
         for(int x = m - 2; x > i; x--)
             cout << arr[x][j] << " ";
    
    PrintSpiral(arr, i + 1, j + 1, m - 1, n - 1);
}

int main()
{
	int mat[R][C] = { {1, 2 ,3 ,4},
	                  {5, 6 ,7, 8},
					  {9, 10, 11, 12},
					  {13, 14, 15, 16} };
	
	PrintSpiral(mat, 0, 0, R, C);
	return 0;					  
}

