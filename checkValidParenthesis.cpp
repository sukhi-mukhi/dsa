#include <bits/stdc++.h> 
using namespace std; 
  

bool isMatch(char a, char b){
    return(a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
}
bool areParanthesisBalanced(string s)
{
    // code here
    stack<char> st;
    for(auto x: s){
        
        if((x=='(')|| (x=='{') || (x=='[')){
            st.push(x);
        }
        else{
            
             if(isMatch(st.top(),x)==false){
                return false;
            }
            else{
              st.pop();  
            }
        }
    }
    return (st.empty()==true);
}

int main() 
{ 
    string expr = "{()}["; 
  
  
    if (areParanthesisBalanced(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
}
