#include<bits/stdc++.h>
using namespace std;

void AllPermutations(string str, int start, int end)
{
	if(start == end)
	   cout << str << endl;
	else
	{
		for(int i = start; i <= end; i++)
		{
			swap(str[start], str[i]);
			
			AllPermutations(str, start + start, end );
			
			swap(str[start], str[i]);
		}
	}
}

int main()
{
	string str = "ABC";
	int n = str.size();
	AllPermutations(str, 0, n-1);
	return 0;
}

