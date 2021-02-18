#include<bits/stdc++.h>
#include<iostream>

using namespace std;

const char hashTable[10][5] = { " ",  " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void printWordsUtil(int num[], int current_digit, char output[], int n)
{
	int i;
	if(current_digit == n) {
		cout << output << "       ";
		return ;
	}
	
	for(i = 0; i < strlen(hashTable[num[current_digit]]); i++)
	{
		output[current_digit] = hashTable[num[current_digit]][i];
		
		printWordsUtil(num, current_digit + 1, output, n);
		
		if ( num[current_digit] == 0 || num[current_digit] == 1) 
		return ;
	}
	
} 

void printWords(int num[], int n )
{
	char result[n + 1];
	result[n] = '\0';
	printWordsUtil(num, 0, result, n);
}

int main()
{
	int num[] = {2, 3, 4};
	int n = sizeof(num)/sizeof(num[0]);
	printWords(num, n);
	return 0;
	
}
