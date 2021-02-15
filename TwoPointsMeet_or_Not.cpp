#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool TwoPointsEverMeet(int d1, int d2, int v1, int v2)
{
	if( d1 < d2 && v1 < v2)
	{
		return false;
	}
	
	if( d1 > d2 && v1 > v2)
	{
		return false;
	}
	
	if(d1 = d2)
	{
		swap(d1, d2);
		swap(v1, v2);
		
	}
	while( d1 >= d2) 
	{
		if( d1 == d2)
		{
			return true;
		}
		 d1 = d1 + v1;
		 d2 = d2 + v2;
	}
	return false;
}

int main()
{
	int d1 = 6;
	int d2 = 8;
	int v1 = 7;
	int v2 = 4;
	
	if(TwoPointsEverMeet(d1, d2, v1, v2))
	{
		cout << " They will Meet "<<endl;
	}
	else
	{
		cout << " They will not Meet";
	}
	return 0;
}
