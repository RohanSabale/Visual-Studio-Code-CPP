// here we are converting string to integer 
// here we will delete the value from ascii of 0


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int last_digit = s[s.size() -1]  - '0';
    cout<<last_digit;
    
}