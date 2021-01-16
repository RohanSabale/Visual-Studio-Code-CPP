/* 
reverse the string and print the alternate letters of the string

*/

#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str;
    cin>>str;

	reverse(str.begin(), str.end()); 
    for (int i = 0; i < str.size(); i+=2)
    {
        /* code */
        cout<<str[i];
    }	
	return 0; 
} 
