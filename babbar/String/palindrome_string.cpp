#include<bits/stdc++.h>
using namespace std;
int main()
 {
	    string str;
	    cin >> str;
        string str1;
        str1 = str;
         reverse(str1.begin(),str1.end());

        if(str == str1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no";
        }
	
}