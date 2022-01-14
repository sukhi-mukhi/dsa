#include <bits/stdc++.h>
#include <string>
using namespace std;
 
// Function to remove duplicates
void removeDuplicates(string str)
{
    
    char firstCharacter= str.at(0);
    string s="";
    s.push_back(firstCharacter);
    //write your code here
    for(int i=1;i<str.size();i++){
        size_t found = s.find(str[i]);
        if(found==string::npos){
            s.push_back(str[i]);
        }
    }
    cout<<"--> "<<s;
}
 

int main()
{
    string str = "cbacdcbc";
    removeDuplicates(str);
    return 0;
}

/* Try more Inputs

case1:
actual = removeDuplicates("cbacdcbc")
expected = "acdb"

case2:
actual = removeDuplicates("Java")
expected = "Jav"

case3:
actual = removeDuplicates("abacbc")
expected = "abc"


*/
