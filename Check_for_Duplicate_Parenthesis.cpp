#include <bits/stdc++.h> 
using namespace std; 
  
bool isDuplicate(string s)
{ 
    
    stack<char> Stack; 
  
    for(char ch : s)
	{ 
        
        if(ch == ')')
		{ 
            
            char top = Stack.top(); 
            Stack.pop(); 
  
            int elementsInside = 0; 
            
            while(top != '(')
			{ 
                elementsInside++; 
                top = Stack.top(); 
                Stack.pop(); 
            } 
            
            if(elementsInside < 1)
			{ 
                return 1; 
            } 
        } 
  
        else{
            Stack.push(ch); 
        }    
    } 
  
    return false; 
} 
  
  
int main()
{ 
    
    string s = "(((a+(b))+(c+d)))"; 
  
    if(isDuplicate(s)){ 
        cout<<"Expression contains duplicate parenthesis.";
    }    
    else{
        cout<<"Expression does not contain duplicate parenthesis."; 
    }    
  
    return 0; 
}

