#include<algorithm>
#include<iostream>

using namespace std;

int  NoOfPlateform(int arrival[], int departure[], int n)
{
	sort(arrival, arrival + n);
	sort(departure, departure + n);
	
	int plateform_required = 1, result = 1;
	int i = 1, j = 0;
	
	while(i < n && j < n)
	{
		if(arrival[i] <= departure[j])
		{
			plateform_required++;
			i++;
		}
		
		else if (arrival[i], departure[j])
		{
				plateform_required--;
				j++;
		}
		
		if(	plateform_required > result)
		     result = 	plateform_required;	
	}
	
	return result;
}

int main()
{
	int arrival[] = {900, 940, 950, 1100, 1500, 1800};
	int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
	int n = sizeof(arrival)/sizeof(arrival[0]);
	
	cout << NoOfPlateform(arrival, departure, n);
	
	return 0;
}
